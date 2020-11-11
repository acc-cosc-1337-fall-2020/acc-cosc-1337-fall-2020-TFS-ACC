//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_4_A_H
#define TIC_TAC_TOE_4_A_H

class TicTacToe4 : public TicTacToe {

    public://///////////////////////////////////////

    TicTacToe4(): TicTacToe(4){}

    //PUB VAR

    //PUB FUNCT

    private:////////////////////////////////////////

    //PRIV VAR

    //PRIV FUNCT
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();

    protected://////////////////////////////////////

    //PROT VAR

    //PROT FUNCT

};

#endif
