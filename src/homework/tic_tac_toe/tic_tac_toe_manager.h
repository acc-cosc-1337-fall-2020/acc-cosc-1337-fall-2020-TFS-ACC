//h
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
#include "tic_tac_toe.h"

#ifndef TICTACTOE_MAN_A_H
#define TICTACTOE_MAN_A_H

class TicTacToeManager
{

    public: ////////////////////////

        //Public Variables
        vector<TicTacToe> games;

        //Public Functions
        void save_game(const TicTacToe game);
        void get_winner_total(int& x, int& o, int& t);
        friend ostream& operator<< (ostream& os, TicTacToeManager& man);

    private:

        //Private Variables
        
        int X_win = 0;
        int O_win = 0;
        int tie = 0;

        //Private Functions
        void update_winner_count(std::string winner);

};

#endif