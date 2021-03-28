#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#define easy_count 10

#include<stdlib.h>
#include<time.h>

void Initboard(char board[ROWS][COLS],int rows,int cols );
void Displayboard(char board[ROWS][COLS], int row, int col);
void Setmine(char board[ROWS][COLS], int row, int col);
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);