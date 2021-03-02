#include <stdio.h>
#include <stdlib.h>
#define height 8
#define width 8
void display_start_board();
void pawn(int x1, int y1, int x2, int y2);
enum board_squares {
A1 = 21, B1, C1, D1, E1, F1, G1, H1,
A2 = 31, B2, C2, D2, E2, F2, G2, H2,
A3 = 41, B3, C3, D3, E3, F3, G3, H3,
A4 = 51, B4, C4, D4, E4, F4, G4, H4,
A5 = 61, B5, C5, D5, E5, F5, G5, H5,
A6 = 71, B6, C6, D6, E6, F6, G6, H6,
A7 = 81, B7, C7, D7, E7, F7, G7, H7,
A8 = 91, B8, C8, D8, E8, F8, G8, H8, NO_SQ
};


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

//void pawn

int main()
{
    display_start_board();
    return 0;
}
