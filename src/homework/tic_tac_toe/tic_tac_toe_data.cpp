//cpp
#include "tic_tac_toe_data.h"

void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games){

    ofstream tictactoedat;

    for (auto & game: games){

        for (auto ch : game->pegs){
            
        }

    }

}

std::vector<std::unique_ptr<TicTacToe>> get_games(){


    vector<unique_ptr<TicTacToe>> boards;

    ifstream tictactoedat;

    tictactoedat.open("tictactoedat.txt");

    string line;

    vector<string> pegs;

    while(getline(tictactoedat, line)){

        for (auto ch: line){

            pegs.push_back(string(1, ch));

            string winner = pegs.back();
            pegs.pop_back();

            unique_ptr<TicTacToe> board;

            if (pegs.size() == 9){

                board = make_unique<TicTacToe3>(pegs, winner);

            }else if (pegs.size() == 16){

                board = make_unique<TicTacToe4>(pegs, winner);

            }

            boards.push_back(move(board));

        }
        
    }
    
    tictactoedat.close();

    return boards;

} 
