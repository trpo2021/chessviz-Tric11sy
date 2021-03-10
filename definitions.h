#ifndef definitions_h
#define definitions_h
#define height 8
#define width 8
#define board_squares_num 120
#define maxgamemoves 2000

typedef unsigned long long U64;
enum file {
    FILE_A,
    FILE_B,
    FILE_C,
    FILE_D,
    FILE_E,
    FILE_F,
    FILE_G,
    FILE_H,
    FILE_NONE
};
enum rank {
    RANK_1,
    RANK_2,
    RANK_3,
    RANK_4,
    RANK_5,
    RANK_6,
    RANK_7,
    RANK_8,
    RANK_NONE
};
enum color { WHITE, BLACK, BOTH };
enum board_squares {
    A1 = 21,
    B1,
    C1,
    D1,
    E1,
    F1,
    G1,
    H1,
    A2 = 31,
    B2,
    C2,
    D2,
    E2,
    F2,
    G2,
    H2,
    A3 = 41,
    B3,
    C3,
    D3,
    E3,
    F3,
    G3,
    H3,
    A4 = 51,
    B4,
    C4,
    D4,
    E4,
    F4,
    G4,
    H4,
    A5 = 61,
    B5,
    C5,
    D5,
    E5,
    F5,
    G5,
    H5,
    A6 = 71,
    B6,
    C6,
    D6,
    E6,
    F6,
    G6,
    H6,
    A7 = 81,
    B7,
    C7,
    D7,
    E7,
    F7,
    G7,
    H7,
    A8 = 91,
    B8,
    C8,
    D8,
    E8,
    F8,
    G8,
    H8,
    NO_SQ
};

enum { FALSE, TRUE };
enum {
    white_ling_castling = 1,
    white_queen_castling = 2,
    black_king_castling = 4,
    black_queen_castling = 8
};
typedef struct {
    int pieces[board_squares_num];
    U64 pawns[3];

    int king_sq[2];

    int side;
    int en_pas;
    int fifty_move;

    int ply;
    int his_ply;
    int castle_perm;

    U64 key_position;

    int number_of_paces[13];
    int maj_paces[3];
    int max_paces[3]; // rooks and queens
    int min_paces[3]; // bishop and knights
} s_board;
#endif
