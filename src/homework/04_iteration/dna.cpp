#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string &dna){

    int gccount = 0;
    double gccontent = 0;

    for (string::size_type i = 0; i < dna.length(); i++){
        
        if(dna[i] == 'G' || dna[i] == 'C'){
            gccount++;
        }

    }

    gccontent = (double)gccount / dna.length();
    
    return gccontent;

}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna){

    string reversedDna;

    for (int i = dna.length()-1; i >= 0; i--){

        reversedDna.push_back(dna[i]);

    }

    return reversedDna;

}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna){

    string reversedDna = get_reverse_string(dna);

    int slength = dna.length();

    for (int i = 0; i < slength; i++){
        
        if(reversedDna[i] == 'A'){

            reversedDna[i] = 'T';

        } else if (reversedDna[i] == 'T'){

            reversedDna[i] = 'A';

        } else if (reversedDna[i] == 'C'){

            reversedDna[i] = 'G';

        } else if (reversedDna[i] == 'G'){

            reversedDna[i] = 'C';

        }


    }

    return reversedDna;

}