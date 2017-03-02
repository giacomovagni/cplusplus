//
//  main.cpp
//  headsortails
//
//  Created by Giacomo  Vagni on 02/03/17.
//  Copyright © 2017 Giacomo  Vagni. All rights reserved.
//

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



int main() {
    
    int l = 10;
    char alphabet[4] = {'a', 'b', 'c', 'd'};
    
    string seqA[10] = { };
    string seqB[10] = { };
    
    for (int i = 0; i < l; ++i){
        seqA[i] = alphabet[ rand() % 4 ] ;
        seqB[i] = alphabet[ rand() % 4 ] ;
    }
 
    int max[10] = { };
    
        for (int i = 0; i < 10; ++i){
            if( seqA[i] == seqB[i] ){
                max[i] = 1;
                cout << "True" << endl;
            }
            if( seqA[i] != seqB[i] ){
                max[i] = 0;
                cout << "False" << endl;
            }
        }
    
    for (int i = 0; i < 10; ++i){
        cout << max[i] << endl;
    }

    int total;
    
    for (int i = 0; i < 10; ++i){
        total += max[i];
    }
    
    cout << "**********************" << endl;
    cout << "Hamming total = " << total << endl;
    cout << "**********************" << endl;

    return 0;
}

