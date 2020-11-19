//h
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"

#ifndef TICTACTOE_MAN_A_H
#define TICTACTOE_MAN_A_H

class TicTacToeManager
{

    public: ////////////////////////

        //Public Variables
        TicTacToeManager() = default; 
        TicTacToeManager(TicTacToeData& dat);
        ~TicTacToeManager();

        //Public Functions
        void save_game(unique_ptr<TicTacToe> game);
        void get_winner_total(int& x, int& o, int& t);
        friend ostream& operator<< (ostream& os, const TicTacToeManager& man);
        const vector<string> get_pegs();

    private:

        //Private Variables
        TicTacToeData data;
        vector<unique_ptr<TicTacToe>> games;      
        int X_win{0};
        int O_win{0};
        int tie{0};

        //Private Functions
        void update_winner_count(std::string winner);

};

#endif
