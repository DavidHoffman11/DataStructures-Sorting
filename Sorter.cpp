#include "Sorter.h"
#include "DSVector.h"
#include "DSString.h"
#include <iostream>
#include <fstream>

using namespace std;

Sorter::Sorter() {

}

Sorter::~Sorter() {

}

void Sorter::readWords(char **argv) {
    char* buffer = new char[100];
    DSVector<DSString> wordVec;
    int numWords;

    ifstream myFile;
    myFile.open(argv[1]);

    if (myFile.is_open() == false) {
        cout << "Cannot open input.txt file" << endl;
        //checks to make sure file opens properly
    }

    myFile.getline(buffer, 30);
    numWords = atoi(buffer);
    //reads in first line and stores number of words in numWords variable

    for(int i = 0; i < numWords; i++) {
        myFile.getline(buffer, 30);
        DSString temp(buffer);
        wordVec.push_back(temp);
        //reads in each sequential word and stores them in wordVec
    }

    myFile.close();

    lenSort(wordVec, argv);
    //calls function to sort words in wordVec by length
}

void Sorter::lenSort(DSVector<DSString> wordVec, char** argv) {
    DSVector<DSString> charVec1;
    DSVector<DSString> charVec2;
    DSVector<DSString> charVec3;
    DSVector<DSString> charVec4;
    DSVector<DSString> charVec5;
    DSVector<DSString> charVec6;
    DSVector<DSString> charVec7;
    DSVector<DSString> charVec8;
    DSVector<DSString> charVec9;
    DSVector<DSString> charVec10;
    DSVector<DSString> charVec11;
    DSVector<DSString> charVec12;
    DSVector<DSString> charVec13;
    DSVector<DSString> charVec14;
    DSVector<DSString> charVec15;
    /*
    DSVector<DSString> charVec16;
    DSVector<DSString> charVec17;
    DSVector<DSString> charVec18;
    DSVector<DSString> charVec19;
    DSVector<DSString> charVec20;
    DSVector<DSString> charVec21;
    DSVector<DSString> charVec22;
    DSVector<DSString> charVec23;
    DSVector<DSString> charVec24;
    DSVector<DSString> charVec25;
    DSVector<DSString> charVec26;
    DSVector<DSString> charVec27;
    DSVector<DSString> charVec28;
    DSVector<DSString> charVec29;
    DSVector<DSString> charVec30;
    */
    //each vector stores words of each respective length

    //program runs into memory errors after 10,000 words
    for(int i = 0; i < 10000; i++) {
        if(wordVec[i].getLength() == 1) {
            charVec1.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 2) {
            charVec2.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 3) {
            charVec3.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 4) {
            charVec4.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 5) {
            charVec5.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 6) {
            charVec6.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 7) {
            charVec7.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 8) {
            charVec8.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 9) {
            charVec9.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 10) {
            charVec10.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 11) {
            charVec11.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 12) {
            charVec12.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 13) {
            charVec13.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 14) {
            charVec14.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 15) {
            charVec15.push_back(wordVec[i]);
        }
        /*
        else if(wordVec[i].getLength() == 16) {
            charVec16.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 17) {
            charVec17.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 18) {
            charVec18.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 19) {
            charVec19.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 20) {
            charVec20.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 21) {
            charVec21.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 22) {
            charVec22.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 23) {
            charVec23.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 24) {
            charVec24.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 25) {
            charVec25.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 26) {
            charVec26.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 27) {
            charVec27.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 28) {
            charVec28.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 29) {
            charVec29.push_back(wordVec[i]);
        }
        else if(wordVec[i].getLength() == 30) {
            charVec30.push_back(wordVec[i]);
        }
        */
    }
    if(charVec1.getSize() != 0) {
        insertionSort(charVec1, charVec1.getSize());
    }
    if(charVec2.getSize() != 0) {
        insertionSort(charVec2, charVec2.getSize());
    }
    if(charVec3.getSize() != 0) {
        insertionSort(charVec3, charVec3.getSize());
    }
    if(charVec4.getSize() != 0) {
        insertionSort(charVec4, charVec4.getSize());
    }
    if(charVec5.getSize() != 0) {
        insertionSort(charVec5, charVec5.getSize());
    }
    if(charVec6.getSize() != 0) {
        insertionSort(charVec6, charVec6.getSize());
    }
    if(charVec7.getSize() != 0) {
        insertionSort(charVec7, charVec7.getSize());
    }
    if(charVec8.getSize() != 0) {
        insertionSort(charVec8, charVec8.getSize());
    }
    if(charVec9.getSize() != 0) {
        insertionSort(charVec9, charVec9.getSize());
    }
    if(charVec10.getSize() != 0) {
        insertionSort(charVec10, charVec10.getSize());
    }
    if(charVec11.getSize() != 0) {
        insertionSort(charVec11, charVec11.getSize());
    }
    if(charVec12.getSize() != 0) {
        insertionSort(charVec12, charVec12.getSize());
    }
    if(charVec13.getSize() != 0) {
        insertionSort(charVec13, charVec13.getSize());
    }
    if(charVec14.getSize() != 0) {
        insertionSort(charVec14, charVec14.getSize());
    }
    if(charVec15.getSize() != 0) {
        insertionSort(charVec15, charVec15.getSize());
    }
    /*
    alphaSort(charVec16);
    alphaSort(charVec17);
    alphaSort(charVec18);
    alphaSort(charVec19);
    alphaSort(charVec20);
    alphaSort(charVec21);
    alphaSort(charVec22);
    alphaSort(charVec23);
    alphaSort(charVec24);
    alphaSort(charVec25);
    alphaSort(charVec26);
    alphaSort(charVec27);
    alphaSort(charVec28);
    alphaSort(charVec29);
    alphaSort(charVec30);
      //calls alphabetical sort function on every vector
    */
    printList(argv);
}

void Sorter::insertionSort(DSVector<DSString>& arr, int n) {
    int i, j;
    DSString key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j][0] > key[0]) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    for(int i = 0; i < arr.getSize(); i++) {
        sortedList.push_back(arr[i]);
    }  //once sorted, each array is pushed back into the sortedList vector
}   //GeeksForGeeks source code used as an example

void Sorter::printList(char** argv) {
    ofstream myFile;
    myFile.open(argv[2]);

    if (myFile.is_open() == false) {
        cout << "Cannot open output.txt file" << endl;
        //checks to make sure file opens properly
    }

    for(int i = 0; i < sortedList.getSize(); i++) {
        myFile << sortedList[i] << endl;
    }  //prints sortedlist to output file

    myFile.close();
    //must close file to avoid memory leaks
}