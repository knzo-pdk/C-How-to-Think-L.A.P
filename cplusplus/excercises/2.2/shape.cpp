#include <iostream>
#include <string>

using namespace std;

int main () {

    int lines = 4, hashes = 2, repeats = -3;
    for (int a = 0; a < lines; a++){ 
        for (int i = 0; i < abs(repeats); i++){
            cout << " ";
        }
        repeats++;
           
        for (int i = 0; i < hashes; i++) {
            cout << "#";
        }
        cout << "\n";
        hashes+=2;
    }

    int lines2 = 4, hashes2 = 8;
    for (int a = 0; a < lines2; a++){
        if (hashes2 < 8){ 
            int repeats2 = (8 - hashes2)/2;
            for (int i = 0; i < repeats2; i++){
                cout << " ";
            }
        }   
        for (int i = 0; i < hashes2; i++) {
            cout << "#";
        }
        cout << "\n";
        hashes2-=2;
    }
    
}