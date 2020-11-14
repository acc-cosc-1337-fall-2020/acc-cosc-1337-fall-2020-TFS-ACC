//#include<tic_tac_toe.h>
#include<tic_tac_toe_3.h>
#include<tic_tac_toe_4.h>
#include<tic_tac_toe_manager.h>

int main() 
{
	//choices
	char cont = 'Y';
	string playerOne;
	int board = 0;
	
	//outputs
	int xwin = 0;
	int owin = 0; 
	int tie = 0;
	string winner;

	//instances 
	unique_ptr<TicTacToe> game;
	TicTacToeManager Manager;
	
	do{

		do{

			cout << "Decide which player is \'X\' and which player is \'O\' " << "\n" << "Enter First Player Here: ";
			cin >> playerOne;

		}while(playerOne != "O" && playerOne != "X" && playerOne != "o" && playerOne != "x");
		
		do{
 
			cout << "Choose between a 4x4 board (16 pegs) or a 3x3 board (9 pegs):(3/4) ";
			cin >> board;

		}while(board != 3 && board != 4);

		if(board == 3){

			game = make_unique<TicTacToe3>();

			cout << "Position Numbers: " << "\n"
			<< 1 << " " << 2 << " " << 3 << "\n"
			<< 4 << " " << 5 << " " << 6 << "\n"
			<< 7 << " " << 8 << " " << 9 << "\n";

        	cout << "G A M E  B E G I N" << "\n" << "Current board layout:" << "\n";

		}else if (board == 4){

			game = make_unique<TicTacToe4>();

			cout << "Position Numbers: " << "\n"
			<< 1 << " " << 2 << " " << 3 << " " << 4 << "\n"
			<< 5 << " " << 6 << " " << 7 << " " << 8 << "\n"
			<< 9 << " " << 10 << " " << 11 << " " << 12 << "\n"
			<< 13 << " " << 14 << " " << 15 << " " << 16 << "\n";
        	
			cout << "G A M E  B E G I N" << "\n" << "Current board layout:" << "\n";

		}

		game->start_game(playerOne);

		cout << game;

		do{

			cin >> game;

			cout << game;

			cout << "Continue playing? (Y or y): ";
			cin >> cont;

		}while(game->game_over() == false);

		Manager.save_game(game);

		winner = game->get_winner();

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
