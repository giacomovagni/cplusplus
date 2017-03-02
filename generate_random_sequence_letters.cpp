
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// generate random sequence of letter
char randalpha(){
    
    int l = 10;
    char alphabet[4] = {'a', 'b', 'c', 'd'};
    
    string seq[10] = { };
    
    for (int i = 0; i < l; ++i){
        seq[i] = alphabet[ rand() % 4 ] ;
    }

    return 0;
}

