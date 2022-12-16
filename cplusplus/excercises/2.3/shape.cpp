#include <iostream>
#include <string>

using namespace std;

int main () {
    int lines2 = 3, hashes2 = -3, space2 = 0;
    for (int a = 0; a < lines2; a++){
        for (int i = 0; i < space2; i++){
            cout << " ";
        }
        for (int i = 0; i < (4 - abs(hashes2)); i++){
            cout << "#";
        }
        cout << "\n";
        space2++;
        hashes2++;
        
    }

    

    int lines = 3, hashes = -3, space = 2;
    for (int a = 0; a < lines; a++){
        for (int i = 0; i < space; i++){
            cout << " ";
        }
        for (int i = 0; i < abs(hashes); i++){
            cout << "#";
        }
        cout << "\n";
        space--;
        hashes++;
        
    }

}



        // if (hashes2 < 8){ 
        //     int repeats = (8 - hashes)/2;
        //     for (int i = 0; i < repeats; i++){
        //         cout << " ";
        //     }
        // }   
        // for (int i = 0; i < hashes; i++) {
        //     cout << "#";
        // }
        // cout << "\n";
        // hashes-=2;
    
