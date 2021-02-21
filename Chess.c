#include <stdio.h>
#include <stlib.h>
#include <string.h>
#include <math.h>
#define width 9  //Ширина доски с границами
#define length 9 //Высота доски с границами
#define rank 7    
#define column 7
int i, j;
enum Type
{
   KING = 17 , QUEEN = 18, ROOK = 19, BISHOP = 20, KNIGHT = 21, PAWN = 22, NONE = 0
};

enum Color
{
    BLACK = 1, WHITE
};

struct Piece
{
    enum Type type;
    enum Color color;
};


enum Grid
{
    A = 9, B = 10, C = 11, D = 12, E = 13, F = 14, G = 15, H = 16
};
int currentturn = 1;
int Board[length][width] = { 
    {0, 9, 10, 11, 12, 13, 14, 15, 16},
    {1, 19, 21, 20, 18, 17, 20, 21, 19},
    {2, 22, 22, 22, 22, 22, 22, 22, 22},
    {3, 0, 0, 0, 0, 0, 0, 0, 0,},
    {4, 0, 0, 0, 0, 0, 0, 0, 0},
    {5, 0, 0, 0, 0, 0, 0, 0, 0},
    {6, 0, 0, 0, 0, 0, 0, 0, 0},
    {7, 22, 22, 22, 22, 22, 22, 22, 22},
    {8, 19, 21, 20, 18, 17, 20, 21, 19}
};
int whiteblack[9][9] = {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 2, 2, 2, 2, 2, 2, 2},
    {0, 2, 2, 2, 2, 2, 2, 2},
    {0, 2, 2, 2, 2, 2, 2, 2},
    {0, 1, 1, 1, 2, 2, 2, 2},
    {0, 2, 2, 2, 2, 2, 2, 2},
    {0, 2, 2, 2, 2, 2, 2, 2},
    {0, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 1, 1, 1}
};

union PieceBoard        //***
{
    int Piece;
    int whiteblack;
};
 
int moves[8][8];

int Check_validmoves( int x, int y)
{
    int piece = Board[y][x];
    int color = whiteblack[y][x];
    int canMove = 1;
    moves[y][x] = 2;
    if( x > column || x < 0 || y > rank || y < 0)
    {
        return 1;
    }
    if( piece == 0)
    {
        return 1;
    }
}

void Rook_moves(x, y)    // Движение башен
{
   
}

void Pic_board ()
{
    printf("   ");
    for (int y = 0; y < 8; y++)
    {
        printf("%d: ", y + 1);
    }
    for (int x = 0; x < 8; x++)
    {
        printf("%d: ", x + 1);
        for(int y = 0; y < 8; y++)
        {
            if(Board[x][y] != 0)
            {
                printf("%d%d", Board[x][y], whiteblack[x][y]);    //***
            }
            else
            {
                printf("--");
            }
        }
        printf("\n");
    } 
}

void Draw_moves()
{
    printf("   ");
    for(int y = 0; y < 8; y++)
    {
        printf("%d:", y + 1);
    }
    printf("\n");
    for( int x = 0; x < 8; x++)
    {
        printf("%d:",  x + 1);               
        for( int y = 0; y < 8; y++)
        {
             if(moves[x][y] == 0)
             {
                  printf("--");
                  
             }
             else
             {
                 printf("%d%d", moves[x][y], moves[x][y]);
             }
             printf(" ");
        }
        printf("\n");
    }
}
 
int main()
{ 
//    int i, j;
//    for(i = 0; i < 9; ++i)
//    {
//        for(j = 0; j < 9; ++j)
//        {
//            printf("%d ", Board[i][j]);
//       }
//    printf("\n"); 
//    }
    Pic_board;             
    return 0;
}
