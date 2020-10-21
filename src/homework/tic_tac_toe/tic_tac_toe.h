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

    private:////////////////////////////////////////

    //PRIV.VARIABLES
    string player;
    vector<string> pegs = vector<string>(9, " ");

    //PRIV.FUNCTIONS
    void set_next_player();
    bool check_board_full();
    void clear_board() const;

};

#endif
