/*                                                                                                      a program that prompts the user to input a string.  Your program should convert the message to upper-case letters, substitute digits for certain letters (A->4, B->8, E->3, I->1, O->0, S->5), and then append 10 exclamation marks to the end.

 Evan Miller
 cs161
 
 week 9 lab assignment
 
 source: www.cplusplus.com
 */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string userStr;

int main(){
    //Ask user for string
    cout << "Please enter a string: ";
    getline(cin, userStr);
    
    //convert string to upper case
    for (string::size_type i = 0; i < userStr.length(); i++)
    {
        userStr[i] = toupper(userStr[i]);
    }
    
    //Replace char with int
    replace( userStr.begin(), userStr.end(), 'A', '4' );
    replace( userStr.begin(), userStr.end(), 'B', '8' );
    replace( userStr.begin(), userStr.end(), 'E', '3' );
    replace( userStr.begin(), userStr.end(), 'I', '1' );
    replace( userStr.begin(), userStr.end(), 'O', '0' );
    replace( userStr.begin(), userStr.end(), 'S', '5' );
    
    //append exclamation marks
    userStr.append("!!!!!!!!!!");
    
    
    //print string
    cout << userStr << endl;
    
    return 0;
}
