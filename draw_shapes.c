#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a arrow of specified height whose left edge is at col leftCol.
void print_arrow(int leftCol, int width, int height)
{
  // Calculate the width of the rectangle (half of the arrow's width)
  int rectWidth = width / 2;

  // Starting row for the triangle.
  int triangleStartRow = 0;

  //Triangle
  for (int row = triangleStartRow; row <= height / 2; row++) {
    int minCol = leftCol + width / 2 - row;
    int maxCol = leftCol + width / 2 + row;
    for (int col = leftCol; col < minCol; col++) putchar(' ');
    for (int col = minCol; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
  //Rectangle
  for (int row = 0; row < height / 2; row++){
    for (int col = leftCol; col < leftCol + rectWidth; col++) putchar('*');
    putchar('\n');
  }
}
