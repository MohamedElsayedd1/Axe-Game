# Axe Game

![Axe Game](https://github.com/MohamedElsayedd1/Axe-Game/blob/main/GIF.gif)

A simple game built using the Raylib library in C++. The objective of the game is to control a blue circle and avoid collisions with a moving red rectangle.

## Features

- The player controls a blue circle using the 'A' and 'D' keys to move left and right.
- A red rectangle moves vertically across the screen.
- The game ends if the blue circle collides with the red rectangle.
- A "Game Over!" message is displayed upon collision.

## Installation

To run this game, you need to have Raylib installed on your system. You can download and install Raylib from the [official website](https://www.raylib.com/).

## Usage

1. Clone this repository:
    ```sh
    git clone https://github.com/your-username/axe-game.git
    ```

2. Navigate to the project directory:
    ```sh
    cd axe-game
    ```

3. Compile the game:
    ```sh
    g++ -o axe_game main.cpp -lraylib
    ```

4. Run the game:
    ```sh
    ./axe_game
    ```

## Controls

- **A**: Move the circle left
- **D**: Move the circle right

## Acknowledgements

- [Raylib](https://www.raylib.com/) - The library used to develop this game.
