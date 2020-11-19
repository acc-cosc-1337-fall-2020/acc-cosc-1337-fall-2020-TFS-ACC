//h
//#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


#ifndef TICTACTOE_DATA_A_H
#define TICTACTOE_DATA_A_H

class TicTacToeData
{

public:

    void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
    std::vector<std::unique_ptr<TicTacToe>> get_games(); 

private:

protected:

};

#endif
