#include <string>
#include <iostream>

using namespace std;


int main() {
    int ISBN = 13, itera = 1;
    int input;
    int sum = 0;

    cout << "Enter ISBN-13: ";

    // when not end of ISBN number,
    for (int i = 1; i < ISBN; i++) {

        // Do:
        input = cin.get();
        input = input - '0';

        if(itera%2 == 0){
            sum = sum + input*3;
        }else {
            sum = sum + input*1;
        }
        itera++;
    }

    sum = sum%10;
    if (sum == 0){
        cout << "Check digit is 0. ";
    } else {
        sum = 10 - sum;
        cout << "Check digit is: " << sum;
    }
    
    
}