/*
The board game "Go", implemented in C for the Nintendo GameBoy
*/

#include<gb/gb.h>
#include<gb/drawing.h>
#include"go.h"

int main() {

  drawBoard();
  drawBlack(2,2);
  drawWhite(4,3);
  drawBlack(8,13);

}

void drawBoard() {
  drawHorizontalLines();
  drawVerticalLines();
  drawDots();
}

void drawVerticalLines() {
  unsigned char x,i;
  for(i = 0; i < COLUMNS; i++){
    x = (i * WIDTH) + 3;
    line(x, 3, x, (COLUMNS*WIDTH)-4);
  }
}

void drawHorizontalLines() {
  unsigned char y,i;
  for(i = 0; i < ROWS; i++){
    y = (i * HEIGHT) + 3;
    line(3, y, (ROWS*HEIGHT)-4, y);
  }
}

void drawDots() {
  unsigned char i,x,y;
  color(BLACK, WHITE, SOLID);
  for(i=0; i < 9; i++){
    x = DOT_POSITIONS[i][0];
    y = DOT_POSITIONS[i][1];
    drawPiece(x,y,1);
  }

}

void drawBlack(unsigned char x, unsigned char y) {
  color(BLACK, WHITE, SOLID);
  drawPiece(x,y,3);
}

void drawWhite(unsigned char x, unsigned char y) {
  color(BLACK, WHITE, SOLID);
  drawPiece(x,y,3);
  color(WHITE, WHITE, SOLID);
  drawPiece(x,y,2);
}

void drawPiece(unsigned char x, unsigned char y, unsigned char r) {
  circle((x*WIDTH)+3, (y*HEIGHT)+3, r, 1);
}
