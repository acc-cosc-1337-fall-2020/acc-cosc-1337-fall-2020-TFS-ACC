//cpp
#include "tic_tac_toe_manager.h"


//Public Functions
void TicTacToeManager::save_game(unique_ptr<TicTacToe> game){
    
    cout << "W I N N E R!: " << game->get_winner() << "\n";

    TicTacToeManager::update_winner_count(game->get_winner());
    TicTacToeManager::games.push_back(move(game)); 
    
    get_winner_total(X_win, O_win, tie);

}

ostream& operator<< (ostream& os, const TicTacToeManager& man){

    for (auto& game : man.games){

        cout << *game;

    }

    return os;

}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t){


	cout << "X  W I N S: " << x << "\n"
		<< "O  W I N S: " << o << "\n" 
		<< "T I E S: " << tie << "\n";


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
