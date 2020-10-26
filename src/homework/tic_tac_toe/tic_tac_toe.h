//h
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#ifndef TICTACTOE_A_H
#define TICTACTOE_A_H

class TicTacToe 
{

    public://///////////////////////////////////////

    //PUB.VARIABLES
    bool game_over();

    //PUB.FUNCTIONS
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;
    string get_winner() const;


    private:////////////////////////////////////////

    //PRIV.VARIABLES
    string player;
    string winner;
    vector<string> pegs = vector<string>(9, " ");

    //PRIV.FUNCTIONS
    void set_next_player();
    bool check_board_full();
    void clear_board();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
    
};      

#endif
