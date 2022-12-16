#include <iostream>
#include <string>

using namespace std;

int main () {
    int lines = 4, hashes = 8;
    for (int a = 0; a < lines; a++){
        if (hashes < 8){ 
            int repeats = (8 - hashes)/2;
            for (int i = 0; i < repeats; i++){
                cout << " ";
            }
        }   
        for (int i = 0; i < hashes; i++) {
            cout << "#";
        }
        cout << "\n";
        hashes-=2;
    }
    
}