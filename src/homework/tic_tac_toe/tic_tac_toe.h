//h
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;

#ifndef TICTACTOE_A_H
#define TICTACTOE_A_H

class TicTacToe 
{

    public://///////////////////////////////////////
    
        //CONSTRUCTOR
        TicTacToe(int s): pegs(s*s, " "){};
        TicTacToe(std::vector<string> p, string win): pegs(p), winner(win){};

        //PUBLIC VARIABLES
        bool game_over();
        vector<string> pegs;
     
        //PUBLIC FUNCTIONS
        void start_game(string first_player);
        void mark_board(int position);
        string get_player() const;
        //void display_board() const;
        string get_winner() const;

        friend ostream& operator<< (ostream&, TicTacToe& tic);
        friend istream& operator>> (istream&, TicTacToe& tic);

    private:////////////////////////////////////////

        //PRIVATE VARIABLES
        string player;
        string winner;

        //PRIVATE FUNCTIONS
        void set_next_player();
        bool check_board_full();
        void clear_board();
        void set_winner();

    protected:///////////////////////////////////////

        //PROTECTED VARIABLES
        // vector<string> pegs;

        //PROTECTED FUNCTIONS

        virtual bool check_column_win() = 0 ;
        virtual bool check_row_win() = 0 ;
        virtual bool check_diagonal_win() = 0 ;

};      

#endif
