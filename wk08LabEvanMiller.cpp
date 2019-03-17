//  Test for smallestIndex function
//
//
//  Evan Miller
//  CS161
//  Wk 08 Lab


#include <iostream>
#include <iomanip>

using namespace std;

const int size = 10;

int smallestIndex(int list[],int size);
int count = 0;

int main(){
    int count = 0;
    while (count < 5) {
        
        int list[size] = {}, i = 0, min = 0;
        
        cout << "Randomly entering " << size << " whole numbers: ";
        
        for (i = 0; i < size; i++) {
            list[i] = rand() % 1000;
        }
        
        cout << "you entered: ";
        for (i = 0; i < size; i++) {
            cout << list[i] << " ";
        }
        cout << endl;
        min = smallestIndex(list, size);
        cout << "The smallest Integer is: " << min << endl;
        
        count++;
    }

}
int smallestIndex(int list[], int size){
    
    int min = list[0], i = 0;
    for (i = 1; i < size; i++) {
        if (list[i] < min) {
            min = list[i];
        }
    }
    return min;
}

