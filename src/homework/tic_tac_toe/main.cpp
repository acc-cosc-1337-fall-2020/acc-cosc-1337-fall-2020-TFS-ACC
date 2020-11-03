#include<tic_tac_toe.h>


int main() 
{

	string playerOne, winner;
	char cont = 'Y';
	int position;
	TicTacToe game;

	do{

		do{

			cout << "Decide which player is \'X\' and which player is \'O\' " << "\n" << "Enter First Player Here: ";
			cin >> playerOne;

		}while(playerOne != "O" && playerOne != "X" && playerOne != "o" && playerOne != "x");
		
		game.start_game(playerOne);

		do{

			string currentPlayer = game.get_player();

			cout << currentPlayer << "\'s turn"<< "\n" << " " << "Please Choose a Position number!: ";
			cin >> position;

			game.mark_board(position);

			game.display_board();
		
			cout << "Continue playing? (Y or y): ";
			cin >> cont;

		}while(game.game_over() == false);

		winner = game.get_winner();

		cout << "W I N N E R!: " << winner << "\n";

		cout << "Do you want to play again? (Y or y): ";

		cin >> cont;
		
	}while(cont == 'Y' || cont == 'y');

	return 0;
}

//testcomment
