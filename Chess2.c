#include "definitions.h"
#include <stdio.h>
#include <stdlib.h>
void display_start_board();
// Вывод начальной доски
void display_start_board()
{
    char board[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
    int i, j, k = 8;
    char letter_notation[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    printf("  ");
    for (i = 0; i < width; ++i) {
        printf("%c ", letter_notation[i]);
    }
    printf("\n");
    for (i = 0; i < height; ++i) {
        printf("%d ", k);
        for (j = 0; j < width; ++j) {
            printf("%c ", board[i][j]);
        }
        k = k - 1;
        printf("\n");
    }
}

// void pawn

int main()
{
    display_start_board();
    return 0;
}
