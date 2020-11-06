//cpp
#include "tic_tac_toe_manager.h"


//Public Functions
void TicTacToeManager::save_game(const TicTacToe game){

    string winner = game.get_winner();
    TicTacToeManager::update_winner_count(winner);
    TicTacToeManager::games.push_back(game); 

}

ostream& operator<< (ostream& os, TicTacToeManager& man){

    for (int i = 0; i < man.games.size(); i++){

        cout << man.games[i];

    }

}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t){

    o = TicTacToeManager::O_win;
    x = TicTacToeManager::X_win;
    t = TicTacToeManager::tie;

}

//Private Functions
void TicTacToeManager::update_winner_count(std::string winner){

    if ( winner == "X" ){
        TicTacToeManager::X_win++; 
    } else if (winner == "O"){
        TicTacToeManager::O_win++;
    }else if (winner == "C"){
        TicTacToeManager::tie++;
    }

}