#include <iostream>
#include <string>

using namespace std;

//-Add digits. If >=10, add doubled digits individually
int doubleProcessor(int digit){
    int doubled, sum;
    doubled = digit*2;
    if(doubled >=10) sum = 1 + doubled%10; 
    else sum += doubled;
    return sum;
}

void readDigit(){
    int oddSum = 0, evenSum = 0;
    int digit;
    int sum;
    int iterator = 1;
    cout << "Enter your digits: ";        
    digit = cin.get();
    while (digit != 10){
        if (iterator % 2 == 0){
            //All computer data is essentially numeric, 
            //so individual characters are represented by integer character codes.
            //Enter a one-digit number: 7 Is the digit 55?
            //in order to get integer 7 from the input '7', 
            //subtract by '0', integer character code 48
            oddSum += doubleProcessor(digit - '0'); 
            evenSum += digit - '0';
        }
        else {
            oddSum += digit - '0';
            evenSum += doubleProcessor(digit - '0');
        }
        iterator++;
        digit = cin.get();
    }

    if ((iterator - 1) % 2 == 0) sum = evenSum;
    else sum = oddSum;
    cout << "Sum is: " << sum << '\n';

    if(sum%10==0) cout << "The number is valid.";
    else cout << "Number is invalid. ";
}


int main(){

//readDigit();

}


