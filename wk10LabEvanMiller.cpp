/*  a program that reads students’ names followed by their test scores from the given input file.  The program should output to a file, output.txt, each student’s name followed by the test scores and the relevant grade.
 
    Evan Miller
    Cs161
 
    sources: None.
 */

#include <iomanip>
#include <string>
#include <iostream>

using namespace std;

const int MaxArrSize = 100;

struct Person
{
    string fname;
    string lname;
 };

Person student[MaxArrSize];
int currentIndex = 0;

void addStudent();
void printStudent();

int main(){
    
    char reply;
    
    do {
        cout << "enter (A)add, (P)print, or (Q)quit: ";
        cin >> reply;
        switch (reply) {
            case 'a': case'A':
                addStudent();
                break;
                
            case 'p': case 'P':
                printStudent();
                break;
        }
    } while (reply != 'q' && reply != 'Q');
    return 0;
}

void addStudent(){
    
    if (currentIndex >= MaxArrSize) {
        cout << "Table is full." << endl;
    }
    else{
        cout << "Please enter first name: ";
        cin >> student[currentIndex].fname;
        cout << "Please enter last name: ";
        cin >> student[currentIndex].lname;
        currentIndex++;
    }
}

void printStudent(){
    if (currentIndex == 0) {
        cout << "Table is empty.";
    }
    else{
        for (int i = 0; i < currentIndex; i++) {
            cout << setw(3) << i << " " << student[i].fname << " " << student[i].lname << endl;
        }
    }
}







