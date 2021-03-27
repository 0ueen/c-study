#define Row 3
#define Col 3

void Initboard(char board[Row][Col], int row, int col);
void Displayboard(char board[Row][Col], int row, int col);
void Playermove(char board[Row][Col], int row, int col);
void Computermove(char board[Row][Col], int row, int col);
char Iswin(char board[Row][Col], int row, int col);//需要四种结局的反馈
