//cpp
#include "tic_tac_toe.h"

////////////////TODO///////////
//  *   Why is "check_board_full()" 
//      supposed to return a bool  
//      if its void???
//
//
//
///////////////////////////////

//PUB.FUNCTIONS///////////////////////////////////////
bool TicTacToe::game_over(){
    return TicTacToe::check_board_full();
}

void TicTacToe::start_game(string first_player){
    if (first_player != "X" && first_player != "O"){
        cout << "That is not a valid player input.";
    }else{
        TicTacToe::player = first_player;
        clear_board();
    }
}

void TicTacToe::mark_board(int position){
    TicTacToe::pegs[position - 1] = player;
    TicTacToe::set_next_player();
}

string TicTacToe::get_player() const {
    return TicTacToe::player;
}

void TicTacToe::display_board() const{
    cout << " " << "---" << " " << "---" << " " << "---" << " " << "\n"
        << "|" << " " << TicTacToe::pegs[0] << " " << "|" << " " << TicTacToe::pegs[1] << " " << "|" << " " << TicTacToe::pegs[2] << " " << "|" << "\n"
        << " " << "---" << " " << "---" << " " << "---" << " " << "\n"
        << "|" << " " << TicTacToe::pegs[3] << " " << "|" << " " << TicTacToe::pegs[4] << " " << "|" << " " << TicTacToe::pegs[5] << " " << "|" << "\n"
        << " " << "---" << " " << "---" << " " << "---" << " " << "\n"
        << "|" << " " << TicTacToe::pegs[6] << " " << "|" << " " << TicTacToe::pegs[7] << " " << "|" << " " << TicTacToe::pegs[8] << " " << "|" << "\n"
        << " " << "---" << " " << "---" << " " << "---" << " " << "\n" << "\n";
}

//PRIV.FUNCTIONS////////////////////////////////////////
void TicTacToe::set_next_player(){
     if( TicTacToe::player == "X" ){
         TicTacToe::player = "O";
     }else if( TicTacToe::player == "O" ){
         TicTacToe::player = "X";
     }
}

bool TicTacToe::check_board_full(){
    if (find(TicTacToe::pegs.begin(), TicTacToe::pegs.end(), " ") != TicTacToe::pegs.end()){
        return false;
    }else{
        return true;
    }
}

void TicTacToe::clear_board() const {
    vector<string> pegs = vector<string>(9, " ");
}
