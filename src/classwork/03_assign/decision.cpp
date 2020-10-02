//cpp
#include "decision.h"

//IF ELSE
string get_letter_grade_using_if(int grade){
    string if_grade;

    if (grade >= 90 && grade < 100) {
        if_grade = "A";
    } else if (grade >= 80 && grade < 90) {
        if_grade = "B";
    } else if (grade >= 70 && grade < 80) {
        if_grade = "C";
    } else if (grade >= 60 && grade < 70) {
        if_grade = "D";
    } else if (grade <= 50 && grade > 0) {
        if_grade = "F";
    } else {
        cout << "The number you have entered is out of range." << "\n";
    }

    return if_grade;
}

//SWITCH
string get_letter_grade_using_switch(int grade){
    string switch_grade;

    switch (grade / 10) {
        case 0:
        case 1:
        case 2: 
        case 3: 
        case 4:
        case(5):
            switch_grade = "F";
            break;
        case(6):
            switch_grade = "D";
            break;
        case(7):
            switch_grade = "C";
            break;
        case(8):
            switch_grade = "B";
            break;
        case(9):
            switch_grade = "A";
            break;
        case(10):
            switch_grade = "A";
        default:
            cout << "The number you have entered is out of range." << "\n";
            break;
    }

    return switch_grade;
}
