//cpp
#include "tic_tac_toe.h"


//PUB.FUNCTIONS///////////////////////////////////////
bool TicTacToe::game_over(){

    if(TicTacToe::check_row_win() == true || TicTacToe::check_column_win() == true || TicTacToe::check_diagonal_win() == true){
        TicTacToe::set_winner();
        return true;
    // if(TicTacToe::check_column_win() == true){
    //     TicTacToe::set_winner();
    //     return true;
    }else if (TicTacToe::check_board_full() == true ){
        TicTacToe::winner = "C";
        return true;
    }else{
        return false;
    }

}

void TicTacToe::start_game(string first_player){
    if (first_player != "X" && first_player != "O"){
        cout << "That is not a valid player input.";
    }else{
        TicTacToe::player = first_player;
    }
        TicTacToe::clear_board();
        
        cout << "Position Numbers: " << "\n"
		<< 1 << " " << 2 << " " << 3 << "\n"
		<< 4 << " " << 5 << " " << 6 << "\n"
		<< 7 << " " << 8 << " " << 9 << "\n";

        cout << "G A M E  B E G I N" << "\n" << "Current board layout:" << "\n";

}

void TicTacToe::mark_board(int position){
    TicTacToe::pegs[position - 1] = player;
    TicTacToe::set_next_player();
}

string TicTacToe::get_player() const {
    return TicTacToe::player;
}

// void TicTacToe::display_board() const{
//     cout << " " << "---" << " " << "---" << " " << "---" << " " << "\n"
//         << "|" << " " << TicTacToe::pegs[0] << " " << "|" << " " << TicTacToe::pegs[1] << " " << "|" << " " << TicTacToe::pegs[2] << " " << "|" << "\n"
//         << " " << "---" << " " << "---" << " " << "---" << " " << "\n"
//         << "|" << " " << TicTacToe::pegs[3] << " " << "|" << " " << TicTacToe::pegs[4] << " " << "|" << " " << TicTacToe::pegs[5] << " " << "|" << "\n"
//         << " " << "---" << " " << "---" << " " << "---" << " " << "\n"
//         << "|" << " " << TicTacToe::pegs[6] << " " << "|" << " " << TicTacToe::pegs[7] << " " << "|" << " " << TicTacToe::pegs[8] << " " << "|" << "\n"
//         << " " << "---" << " " << "---" << " " << "---" << " " << "\n" << "\n";
//}

ostream& operator<< (ostream& os, TicTacToe& tic){

    cout << " " << "---" << " " << "---" << " " << "---" << " " << "\n"
        << "|" << " " << tic.pegs[0] << " " << "|" << " " << tic.pegs[1] << " " << "|" << " " << tic.pegs[2] << " " << "|" << "\n"
        << " " << "---" << " " << "---" << " " << "---" << " " << "\n"
        << "|" << " " << tic.pegs[3] << " " << "|" << " " << tic.pegs[4] << " " << "|" << " " << tic.pegs[5] << " " << "|" << "\n"
        << " " << "---" << " " << "---" << " " << "---" << " " << "\n"
        << "|" << " " << tic.pegs[6] << " " << "|" << " " << tic.pegs[7] << " " << "|" << " " << tic.pegs[8] << " " << "|" << "\n"
        << " " << "---" << " " << "---" << " " << "---" << " " << "\n" << "\n";
    
    return os;

}

istream& operator>> (istream& is, TicTacToe& tic){

        string currentPlayer = tic.get_player();
        int position;
    	
        cout << currentPlayer << "\'s turn"<< "\n" << " " << "Please Choose a Position number!: ";
		cin >> position;

		tic.mark_board(position);    

    return is;

}

string TicTacToe::get_winner() const{

    return TicTacToe::winner;

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

void TicTacToe::clear_board(){
    TicTacToe::pegs = vector<string>(9, " ");
}


bool TicTacToe::check_column_win(){

    if (TicTacToe::pegs[0] == "X" && TicTacToe::pegs[3] == "X" && TicTacToe::pegs[6] == "X"){ 
        return true;
    } else if (TicTacToe::pegs[1] == "X" && TicTacToe::pegs[4] == "X" && TicTacToe::pegs[7] == "X" ){
        return true;
    } else if (TicTacToe::pegs[2] == "X" && TicTacToe::pegs[5] == "X" && TicTacToe::pegs[8] == "X" ){
        return true;
    } else if (TicTacToe::pegs[0] == "O" && TicTacToe::pegs[3] == "O" && TicTacToe::pegs[6] == "O" ){
        return true;
    } else if (TicTacToe::pegs[1] == "O" && TicTacToe::pegs[4] == "O" && TicTacToe::pegs[7] == "O" ){
        return true;
    } else if (TicTacToe::pegs[2] == "O" && TicTacToe::pegs[5] == "O" && TicTacToe::pegs[8] == "O" ){
        return true;
    } else {
        return false;
    }

}

bool TicTacToe::check_row_win(){

   if (TicTacToe::pegs[0] == "X" && TicTacToe::pegs[1] == "X" && TicTacToe::pegs[2] == "X"){ 
        return true;
    } else if (TicTacToe::pegs[3] == "X" && TicTacToe::pegs[4] == "X" && TicTacToe::pegs[5] == "X" ){
        return true;
    } else if (TicTacToe::pegs[6] == "X" && TicTacToe::pegs[7] == "X" && TicTacToe::pegs[8] == "X" ){
        return true;
    } else if (TicTacToe::pegs[0] == "O" && TicTacToe::pegs[1] == "O" && TicTacToe::pegs[2] == "O" ){
        return true;
    } else if (TicTacToe::pegs[3] == "O" && TicTacToe::pegs[4] == "O" && TicTacToe::pegs[5] == "O" ){
        return true;
    } else if (TicTacToe::pegs[6] == "O" && TicTacToe::pegs[7] == "O" && TicTacToe::pegs[8] == "O" ){
        return true;
    } else {
        return false;
    }

}

bool TicTacToe::check_diagonal_win(){

   if (TicTacToe::pegs[0] == "X" && TicTacToe::pegs[4] == "X" && TicTacToe::pegs[8] == "X"){ 
        return true;
    } else if (TicTacToe::pegs[6] == "X" && TicTacToe::pegs[4] == "X" && TicTacToe::pegs[2] == "X" ){
        return true;
    } else if (TicTacToe::pegs[0] == "O" && TicTacToe::pegs[4] == "O" && TicTacToe::pegs[8] == "O" ){
        return true;
    } else if (TicTacToe::pegs[6] == "O" && TicTacToe::pegs[4] == "O" && TicTacToe::pegs[2] == "O" ){
        return true;
    } else {
        return false;
    }

}

void TicTacToe::set_winner(){

     if ( TicTacToe::player == "X" ){
         TicTacToe::winner = "O";
     }else if( TicTacToe::player == "O" ){
         TicTacToe::winner = "X";
     }

 }
