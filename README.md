# GRAPHICS

This repository contains a collection of simple C/C++ graphics programs utilizing the Turbo C/C++ graphics.h library. Each program demonstrates the implementation of basic computer graphics algorithms and drawing primitives, such as points, lines, shapes, and patterns.

## Contents

All source codes are located in the `programs/` directory. Below is a brief overview of the programs included:

- **1-representation.cpp**  
  Draws multiple points at specified coordinates.

- **2-line.cpp**  
  Draws a straight line using the `line()` graphical function.

- **3-triangle.cpp**  
  Draws a triangle by connecting three lines.

- **4-rectangle.cpp**  
  Draws a rectangle using the `rectangle()` function.

- **5-circle.cpp**  
  Draws a circle at the center of the screen.

- **6-sine_wave.cpp**  
  Animates a sine wave using the `putpixel()` function.

- **7-house.cpp**  
  Draws a hut/house using rectangles, lines, and fill styles.

- **8-ellipse.cpp**  
  Draws an ellipse at the center of the screen.

- **9-concentric_circles.cpp**  
  Draws concentric circles with different colors.

- **10-line_algo.cpp**  
  Implements a basic line drawing algorithm using DDA (Digital Differential Analyzer).

## Requirements

- Turbo C/C++ or an equivalent DOS-based compiler/emulator
- BGI (Borland Graphics Interface) drivers (commonly found at `C:\Turboc3\BGI`)
- DOSBox (optional, for running on modern systems)

## How to Run

1. Copy the contents of the `programs/` directory to your Turbo C/C++ environment.
2. Open any `.cpp` file using the Turbo C/C++ IDE.
3. Compile and run the program.
4. Ensure the BGI directory path in `initgraph()` matches your setup, e.g., `C:\\Turboc3\\BGI`.

## Notes

- All programs demonstrate usage of classic graphics primitives and algorithms.
- Programs require a graphics-compatible environment; they may not run natively on modern Windows, Mac, or Linux systems without an emulator.

---
