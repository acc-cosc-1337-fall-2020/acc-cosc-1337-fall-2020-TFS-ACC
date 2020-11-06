#include<tic_tac_toe.h>
#include<tic_tac_toe_manager.h>

int main() 
{

	string playerOne, winner;
	char cont = 'Y';
	TicTacToe game;
	TicTacToeManager Manager;
	int xwin = 0;
	int owin = 0; 
	int tie = 0;

	do{

		do{

			cout << "Decide which player is \'X\' and which player is \'O\' " << "\n" << "Enter First Player Here: ";
			cin >> playerOne;

		}while(playerOne != "O" && playerOne != "X" && playerOne != "o" && playerOne != "x");
		
		game.start_game(playerOne);

		cout << game;

		do{

			cin >> game;

			cout << game;

			cout << "Continue playing? (Y or y): ";
			cin >> cont;

		}while(game.game_over() == false);

		Manager.save_game(game);

		winner = game.get_winner();

		Manager.get_winner_total(xwin, owin, tie);

		cout << "W I N N E R!: " << winner << "\n";

		cout << "X  W I N S: " << xwin << "\n"
			<< "O  W I N S: " << owin << "\n" 
			<< "T I E S: " << tie << "\n";

		cout << "Do you want to play again? (Y or y): ";

		cin >> cont;
		
	}while(cont == 'Y' || cont == 'y');

	cout << Manager;

	return 0;
}
