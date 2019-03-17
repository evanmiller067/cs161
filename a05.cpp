/*
 program to calculate and display the number of primes in the first 50 “chiliads”.
 
 Evan Miller
 CS161
 
 sources: www.cplusplus.com
 */

#include <iostream>
#include <iomanip>

using namespace std;

bool isPrime(long n);
long primeCount( long x,long y);
int primeTotal = 0, x = 0, y = 0;
double averageChiliadPrime = 0;

int main(){
    
    cout << "To check for the amount of primes between two values please enter the first value: ";
    cin >> x;
    cout << endl << "Please enter the second value: ";
    cin >> y;
    cout << setw(10) << "Start" << setw(10) << "End" << setw(10) << "Primes" << endl;
    cout << setw(10) << x << setw(10) << y << setw(10)<< primeCount(x,y) << endl;
    cout << "Total number of primes in the first 50 chiliads: " << primeCount(1,50000) << endl;
    averageChiliadPrime = primeCount(1, 50000) / 50.0;
    cout << "Average number of primes per Chiliad: " << averageChiliadPrime << endl;
    return 0;
}
long primeCount(long x, long y) {
    int count = 0;
    for (int x = 1; x < y; x++) {
        if (isPrime(x)) count++;
    }
    return count;
}
bool isPrime(long n) {
    if (n<= 1) return false;
    for (int p = 2; p * p <= n; p++) {
        if (n % p == 0) return false;
    }
    return true;
}
