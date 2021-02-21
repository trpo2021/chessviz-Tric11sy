#include <stdio.h>
#include <stdlib.h>
//#include
#define height 8
#define width 8

// Список функций
void king(int, int);
void queen(int, int);
void rook(int, int);
void knight(int, int);
void bishop(int, int);
void pawn(int, int);
void playerfirst();
void playersecond();
void boardchange(int, int, int, int);
void beginingboard();
int whitecheck(int, int);
int blackcheck(int, int);

int whitepawnstatus[8] = {0, 0, 0, 0, 0, 0, 0, 0}; //**
int blackpawnstatus[8] = {0, 0, 0, 0, 0, 0, 0, 0};

// Доска
char Board[height][width]
        = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
           {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
           {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
           {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
           {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
           {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
           {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
           {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

void boardchange(int a1, int b1, int a2, int b2)
{
    char temp;

    temp = Board[a1][b1];
    Board[a1][b1] = Board[a2][b2];
    Board[a2][b2] = temp;
}

// Вывод начальной доски
void beginingboard()
{
    int i, j, k = 8;
    char array[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    printf("  ");
    for (i = 0; i < width; ++i) {
        printf("%c ", array[i]);
    }
    printf("\n");
    for (i = 0; i < height; ++i) {
        printf("%d ", k);
        for (j = 0; j < width; ++j) {
            printf("%c ", Board[i][j]);
        }
        k = k - 1;
        printf("\n");
    }
}

//Проверка правильности хода

int main()
{
    beginingboard();

    return 0;
}
