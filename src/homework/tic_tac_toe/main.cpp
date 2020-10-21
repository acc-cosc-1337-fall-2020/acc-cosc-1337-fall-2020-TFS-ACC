#include<tic_tac_toe.h>


int main() 
{

	string playerOne;
	char cont = 'Y';
	int position;
	TicTacToe game;

	do{

		cout << "Decide which player is \'X\' and which player is \'O\' " << "\n" << "Enter First Player Here: ";
		cin >> playerOne;

	}while(playerOne != "O" && playerOne != "X" && playerOne != "o" && playerOne != "x");

	game.start_game(playerOne);

	cout << "G A M E  B E G I N" << "\n" << "Current board layout:" << "\n";

	game.display_board();

	cout << "Position Numbers: " << "\n"
	<< 1 << " " << 2 << " " << 3 << "\n"
	<< 4 << " " << 5 << " " << 6 << "\n"
	<< 7 << " " << 8 << " " << 9 << "\n";


	do{

		string currentPlayer = game.get_player();

		cout << currentPlayer << "\'s turn"<< "\n" << " " << "Please Choose a Position number!: ";
		cin >> position;

		game.mark_board(position);

		game.display_board();
		
		cout << "Continue playing? (Y or y): ";
		cin >> cont;

	}while(cont == 'Y' || cont == 'y');

	return 0;
}
