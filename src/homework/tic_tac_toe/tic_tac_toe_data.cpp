//cpp
#include "tic_tac_toe_data.h"

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games){

    ofstream tictactoedat;

    tictactoedat.open("tictactoedat.txt");

    for (auto & game: games){

        for (auto ch : game->pegs){

            tictactoedat << ch;

        }

        tictactoedat << game->get_winner();

        tictactoedat << "\n";

    }

    tictactoedat.close();

}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games(){


    vector<unique_ptr<TicTacToe>> boards;

    ifstream tictactoedat ("tictactoedat.txt");

    string line;

    while(getline(tictactoedat, line)){
        vector<string> pegs;
        for (auto ch: line){

            pegs.push_back(string(1, ch));

        }

        string winner = pegs.back();

        pegs.pop_back();

        unique_ptr<TicTacToe> board;
        std::cout<<"Size " <<pegs.size()<<"\n";
        if (pegs.size() == 9){

            board = make_unique<TicTacToe3>(pegs, winner);

        }else if (pegs.size() == 16){

            board = make_unique<TicTacToe4>(pegs, winner);

        }else{
            cout << "error upon intake of dat file";
        }

        boards.push_back(move(board));

        
    }
    
    tictactoedat.close();

    return boards;

} 
