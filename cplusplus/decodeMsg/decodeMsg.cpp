#include <string>
#include <iostream>

using namespace std;

void test(){
    cout << "Enter a number with as many digits as you like: "; 
    char digitChar = cin.get();
    int number = (digitChar - '0');
    digitChar = cin.get();
    while(digitChar != 10) {
        number = number * 10 + (digitChar - '0'); 
        digitChar = cin.get();
    }
    cout << "Numbered entered: " << number << "\n";
}

char uppercaseConvert(int inputChar){
    char alphabetCh;
    alphabetCh = inputChar + '@' ;
    cout << alphabetCh;
    return alphabetCh;
}

char lowercaseConvert(int inputChar){
    char alphabetCh;
    alphabetCh = inputChar + '`' ;
    cout << alphabetCh;
    return alphabetCh;
}

void punctuation(int puncInp){
    char punctuationCh;
    switch (puncInp) {
        case 1: punctuationCh = '!'; break;
        case 2: punctuationCh = '?'; break;
        case 3: punctuationCh = ','; break;
        case 4: punctuationCh = '.'; break;
        case 5: punctuationCh = ' '; break;
        case 6: punctuationCh = ';'; break;
        case 7: punctuationCh = '"'; break;
                        // escapement 
        case 8: punctuationCh = '\''; break;
    }
    cout << punctuationCh;
}

int integerReader(int switchNum){
    int numb;
    char inpDigit;

    inpDigit = cin.get();
    int number = inpDigit - '0';  
    inpDigit = cin.get();
    while ((inpDigit != 10) && (inpDigit != ',')){
        number = number * 10 + (inpDigit - '0');
        inpDigit = cin.get();
    }
    int result;
    switch (switchNum) {
        case 1: 
            result = number % 27;
            if(result != 0) uppercaseConvert(result);  
            break;
        case 2: 
            result = number % 27;
            if(result != 0) lowercaseConvert(result);   
            break;
        case 3: 
            result = number % 9;
            if(result != 0) punctuation(result);   
            break;
    }
    numb = number; 
    return numb;
}

int main(){

    enum modeType {
        UPPERCASE,
        LOWERCASE,
        PUNCTUATION
    };
    modeType mode = UPPERCASE;
    cout << "Enter your numbers: ";
    int modulo;
        while (true){
            switch (mode) {
            case UPPERCASE:
                modulo = integerReader(1);
                if ((modulo % 27) == 0) mode = LOWERCASE;            break;
            case LOWERCASE:
                modulo = integerReader(2);
                if ((modulo % 27) == 0) mode = PUNCTUATION;            break;
            case PUNCTUATION:
                modulo = integerReader(3);
                if ((modulo % 9) == 0) mode = UPPERCASE;            break;
            }
        }
}