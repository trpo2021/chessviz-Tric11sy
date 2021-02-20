#include
#include
#include
#define height 8
#define width 8

// Список функций
void king(int, int);
void queen(int, int);
void rook (int, int);
void knight( int, int);
void bishop( int, int);
void pawn( int, int);
void playerfirst();
void playersecond();
void display();
void boardchang( int, int, int, int);

// Доска
chat Board[height][width] = {
    { 'r' , 'n' , 'b' , 'q' , 'k' , 'b' , 'n' , 'r' },
    { 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' },
    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
    { 'P' , 'P' , 'P' , 'P' , 'P' , 'P' , 'P' , 'P' },
    { 'R' , 'N' , 'B' , 'Q' , 'K' , 'B' , 'N' , 'R' }
};

main()
{
    return 0;
{
