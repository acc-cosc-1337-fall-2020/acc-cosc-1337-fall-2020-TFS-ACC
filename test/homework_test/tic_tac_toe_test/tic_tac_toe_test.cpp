#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Test game over if 9 slots are selected."){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false );
	game->mark_board(2);
	REQUIRE(game->game_over() == false );
	game->mark_board(3);
	REQUIRE(game->game_over() == false );
	game->mark_board(4);
	REQUIRE(game->game_over() == false );
	game->mark_board(5);
	REQUIRE(game->game_over() == false );
	game->mark_board(7);
	REQUIRE(game->game_over() == false );
	game->mark_board(6);
	REQUIRE(game->game_over() == false );
	game->mark_board(9);
	REQUIRE(game->game_over() == false );
	game->mark_board(8);

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "C");

} 

TEST_CASE("Test win by first column"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(1);//X
	game->mark_board(6);
	game->mark_board(4);//X
	game->mark_board(9);
	game->mark_board(7);//X

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test win by second column"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(2);//X
	game->mark_board(1);
	game->mark_board(5);//X
	game->mark_board(7);
	game->mark_board(8);//X
	
	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");


}

TEST_CASE("Test win by third column"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(3);//X
	game->mark_board(1);
	game->mark_board(6);//X
	game->mark_board(5);
	game->mark_board(9);//X

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");


}

TEST_CASE("Test win by first row"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(1);//X
	game->mark_board(4);
	game->mark_board(2);//X
	game->mark_board(8);
	game->mark_board(3);//X

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test win by second row"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(4);//X
	game->mark_board(1);
	game->mark_board(5);//X
	game->mark_board(3);
	game->mark_board(6);//X

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test win by third row"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(7);//X
	game->mark_board(1);
	game->mark_board(8);//X
	game->mark_board(5);
	game->mark_board(9);//X

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test win diagonally from top left"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(1);//X
	game->mark_board(4);
	game->mark_board(5);//X
	game->mark_board(7);
	game->mark_board(9);//X

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test win diagonally from bottom left"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(7);//X
	game->mark_board(6);
	game->mark_board(5);//X
	game->mark_board(9);
	game->mark_board(3);//X

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");

}

////////////////////////////////////////////////////
////////////////T I C T A C T O E 4////////////////
//////////////////////////////////////////////////

TEST_CASE("Test game over if 16 slots are selected. (TIC TAC TOE 4)"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false );
	game->mark_board(2);
	REQUIRE(game->game_over() == false );
	game->mark_board(3);
	REQUIRE(game->game_over() == false );
	game->mark_board(4);
	REQUIRE(game->game_over() == false );
	game->mark_board(5);
	REQUIRE(game->game_over() == false );
	game->mark_board(7);
	REQUIRE(game->game_over() == false );
	game->mark_board(6);
	REQUIRE(game->game_over() == false );
	game->mark_board(9);
	REQUIRE(game->game_over() == false );
	game->mark_board(8);
	REQUIRE(game->game_over() == false );
	game->mark_board(10);
	REQUIRE(game->game_over() == false );
	game->mark_board(11);
	REQUIRE(game->game_over() == false );
	game->mark_board(12);
	REQUIRE(game->game_over() == false );
	game->mark_board(13);
	REQUIRE(game->game_over() == false );
	game->mark_board(14);
	REQUIRE(game->game_over() == false );
	game->mark_board(15);
	REQUIRE(game->game_over() == false );
	game->mark_board(16);

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "C");

} 

TEST_CASE("Test win by first column (TIC TAC TOE 4)"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(1);//X
	game->mark_board(2);
	game->mark_board(5);//X
	game->mark_board(3);
	game->mark_board(9);//X
	game->mark_board(4);
	game->mark_board(13);//X

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test win by second column (TIC TAC TOE 4)"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(2);//X
	game->mark_board(1);
	game->mark_board(6);//X
	game->mark_board(4);
	game->mark_board(10);//X
	game->mark_board(3);
	game->mark_board(14);//X
	
	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");


}

TEST_CASE("Test win by third column (TIC TAC TOE 4)"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(3);//X
	game->mark_board(1);
	game->mark_board(7);//X
	game->mark_board(2);
	game->mark_board(11);//X
	game->mark_board(4);
	game->mark_board(15);//X

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");


}

TEST_CASE("Test win by fourth column (TIC TAC TOE 4)"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(4);//X
	game->mark_board(1);
	game->mark_board(8);//X
	game->mark_board(2);
	game->mark_board(12);//X
	game->mark_board(3);
	game->mark_board(16);//X

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");


}

TEST_CASE("Test win by first row (TIC TAC TOE 4)"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(1);//X
	game->mark_board(5);
	game->mark_board(2);//X
	game->mark_board(6);
	game->mark_board(3);//X
	game->mark_board(7);
	game->mark_board(4);//X

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test win by second row (TIC TAC TOE 4)"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(5);//X
	game->mark_board(1);
	game->mark_board(6);//X
	game->mark_board(2);
	game->mark_board(7);//X
	game->mark_board(3);
	game->mark_board(8);//X	

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test win by third row (TIC TAC TOE 4)"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(9);//X
	game->mark_board(1);
	game->mark_board(10);//X
	game->mark_board(2);
	game->mark_board(11);//X
	game->mark_board(3);
	game->mark_board(12);//X

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test win by fourth row (TIC TAC TOE 4)"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(13);//X
	game->mark_board(1);
	game->mark_board(14);//X
	game->mark_board(5);
	game->mark_board(15);//X
	game->mark_board(4);
	game->mark_board(16);//X

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test win diagonally from top left (TIC TAC TOE 4)"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(1);//X
	game->mark_board(4);
	game->mark_board(6);//X
	game->mark_board(7);
	game->mark_board(11);//X
	game->mark_board(8);
	game->mark_board(16);//X

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test win diagonally from bottom left (TIC TAC TOE 4)"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(13);//X
	game->mark_board(6);
	game->mark_board(10);//X
	game->mark_board(9);
	game->mark_board(7);//X
	game->mark_board(1);
	game->mark_board(4);//X

	REQUIRE(game->game_over() == true );
	REQUIRE(game->get_winner() == "X");

}
