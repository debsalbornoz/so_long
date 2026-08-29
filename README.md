<h1 align="center">So_long</h1>

<div align="center">
<img alt="Static Badge" src="https://img.shields.io/badge/Status-Finished-green">
<img alt="Static Badge" src="https://img.shields.io/badge/42-Project-blue">
<img alt="Static Badge" src="https://img.shields.io/badge/Language-C-lightgrey">
<img alt="Static Badge" src="https://img.shields.io/badge/Library-MiniLibX-orange">
</div>

## Demo

[so_longg.webm](https://github.com/user-attachments/assets/6238759d-f748-4026-a016-ef4d52b0d9fc)

## About

**So_long** is a 2D game project developed as part of 42's common core, focused on fundamental game development and graphics programming concepts. This project serves as an introduction to game development using the **MiniLibX** library, a tool for building simple graphical interfaces on Unix-like systems.

### Game Objective

The main goal of **So_long** is to guide the player through a maze, collect all available items, and find the exit. The game is designed to be simple, while still providing solid practice across several aspects of game development:

- **Maze Navigation** — the player explores the maze, using the keyboard to move around and collect items.
- **Item Collection** — items are scattered throughout the maze and must be collected before reaching the exit.
- **Win Condition** — the level is completed once all items have been collected and the player has reached the exit.

### Development Approach

**So_long** was built using the MiniLibX library, which provides the basic functionality needed to create a graphical interface and handle keyboard events. The project follows a modular architecture, making it easier to maintain and extend. The main components of the game include:

- **Game Module** — manages the main game loop, updates, and screen rendering.
- **Map Module** — loads and parses the map file, which defines the maze layout, items, and exit.
- **Player Module** — controls player movement and interaction with the game environment.

### Technologies & Tools

- **C** — the main language used to develop the game.
- **MiniLibX** — graphics library providing functions to draw graphics and manage window events.
- **X11** — the windowing system used by MiniLibX to create and manage windows on Unix-like systems.

### Educational Purpose

**So_long** was created to provide hands-on understanding of core game development concepts, including:

- **2D graphics development** — using MiniLibX to render graphics and handle the user interface.
- **Game logic** — implementing rules and win conditions in a simple game.
- **Resource management** — loading and parsing map files to define the game layout.

This project is ideal for beginners who want to learn about game programming and graphics development in C, providing a solid foundation on which more complex games can be built.

## Table of Contents

- [Requirements](#requirements)
- [Installation](#installation)
- [Contributing](#contributing)
- [Contact](#contact)

## Requirements

To build and run **So_long**, you'll need:

- [MiniLibX](https://github.com/42Paris/minilibx-linux)
- [C Compiler](https://gcc.gnu.org/)
- [Make](https://www.gnu.org/software/make/)

## Installation

1. Clone the repository:

    ```bash
    git clone https://github.com/seu_usuario/so_long.git
    cd so_long
    ```

2. Install MiniLibX:

    ```bash
    git clone https://github.com/42Paris/minilibx-linux
    cd minilibx-linux
    make
    cd ..
    ```

3. Build the project:

    ```bash
    make
    ```

4. Run the game:

    ```bash
    ./so_long map_file.ber
    ```

    Replace `map_file.ber` with the path to the map file you want to play.

## Contributing

Contributions are welcome! If you'd like to help improve **So_long**, follow these steps:

1. Fork the repository.
2. Create a branch for your feature (`git checkout -b feature/MyFeature`).
3. Make your changes and commit them (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature/MyFeature`).
5. Open a Pull Request.

## Contact

If you have any questions or need help, feel free to open an issue or reach out :)

---

<p align="center">Built as part of the 42 curriculum 🖥️</p>
