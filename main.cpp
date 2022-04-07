#include "Sorter.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv){
    Sorter s;
      //used to call function that reads in words to sort
    s.readWords(argv);

    return 0;
}