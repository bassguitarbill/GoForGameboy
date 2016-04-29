const unsigned char WIDTH = 7;
const unsigned char HEIGHT = 7;
const unsigned char ROWS = 19;
const unsigned char COLUMNS = 19;

const unsigned char DOT_POSITIONS[9][2] = {
  {3,3},{3,9},{3,15},
  {9,3},{9,9},{9,15},
  {15,3},{15,9},{15,15}
};

/*
const UBYTE colors[] = { WHITE, DKGREY, LTGREY, BLACK };
const UBYTE modes[] = { SOLID, OR, XOR, AND };
*/

void drawBoard();
void drawVerticalLines();
void drawHorizontalLines();
void drawDots();
void drawBlack(unsigned char x, unsigned char y);
void drawWhite(unsigned char x, unsigned char y);
void drawPiece(unsigned char x, unsigned char y, unsigned char r);
