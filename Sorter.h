#ifndef SORTER_H
#define SORTER_H
#include "DSVector.h"
#include "DSString.h"

class Sorter {
private:
    DSVector<DSString> sortedList;
public:
    Sorter();
    ~Sorter();

    void readWords(char**);
      //reads in list of words
    void lenSort(DSVector<DSString>, char**);
      //sorts words by length
    void insertionSort(DSVector<DSString>&, int);
      //sorts words alphbetically
    void printList(char**);
};


#endif
