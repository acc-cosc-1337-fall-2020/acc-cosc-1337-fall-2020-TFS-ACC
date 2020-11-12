//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_4_A_H
#define TIC_TAC_TOE_4_A_H

class TicTacToe4 : public TicTacToe {

    public://///////////////////////////////////////

    //PUB VAR

    //PUB FUNCT

    //CONSTRUCTOR
    TicTacToe4(): TicTacToe(4){};

    private:////////////////////////////////////////

    //PRIV VAR

    //PRIV FUNCT
    bool check_column_win() override;
    bool check_row_win() override;
    bool check_diagonal_win() override;

    protected://////////////////////////////////////

    //PROT VAR

    //PROT FUNCT

};

#endif
