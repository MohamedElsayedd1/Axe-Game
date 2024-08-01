#include <raylib.h>

int main()
{

    // Frame dimensions
    const int width{800};
    const int length{450};

    // Circle dimensions
    int circleX = width / 2;
    int circleY = length / 2;
    const int radius = 25;

    // Rectangle dimensions
    int rectX = width / 2 - 25;
    int rectY = 0;
    int rectW = 50;
    int rectL = 50;
    int direction = 10;

    InitWindow(width, length, "Axe Game");

    SetTargetFPS(60);

    bool isGameOver = false;

    int count = 0;

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(WHITE);

        if (!isGameOver)
        {

            DrawCircle(circleX, circleY, radius, BLUE);
            DrawRectangle(rectX, rectY, rectW, rectL, RED);

            // Move rectangle
            rectY += direction;
            if (rectY >= length || rectY <= 0)
            {
                direction = -direction;
                // rectX = GetRandomValue(0, width - rectW); // Move to random horizontal position
            }

            // Move circle
            if (IsKeyDown(KEY_D) && circleX <= width - radius - 1)
            {
                circleX += 10;
            }
            else if (IsKeyDown(KEY_A) && circleX >= 0 + radius + 1)
            {
                circleX -= 10;
            }

            if (rectY == circleY && rectX == circleX)
            {
                DrawText("Game over!", 0, 0, 55, BLACK);
            }

            bool collision = (rectX < circleX + radius && rectX + rectW > circleX - radius)
                             && (rectY < circleY + radius && rectY + rectL > circleY - radius);

            if (collision)
            {
                isGameOver = true;
            }
        }
        else
        {
            DrawText("Game Over!", width / 2 - 90, length / 2 - 50, 50, BLACK);
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
