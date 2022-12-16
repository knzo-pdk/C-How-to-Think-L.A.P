#include<iostream>
#include<string>

using namespace std;





// Write code that processes an array of survey data and find mode



int main() {

    const int ARRAY_SIZE = 12;
    int surveyData[ARRAY_SIZE] = {4, 7, 3, 8, 9, 7, 3, 9, 9, 3, 3, 10};
    const int SIZE = 40;
    int mirrorData[SIZE];
    int j = 0;

    int mostOften = 0;

    for(int i = 0; i < SIZE; i++){
        mirrorData[i] = -1;
        cout << "Variable i: " << i << "\n";
    }
    
    for(int i = 0; i < ARRAY_SIZE; i++) {
        //increments of 2 for the variable j
        //cout << "surveyData " << surveyData[i] << "\n";
        while(i < ARRAY_SIZE){
            int j = 0;
            cout << "Variable j: " << j << "\n";
            if(mirrorData[j] == -1) {
                //go forward one element to store how often.
                mirrorData[j] = surveyData[i];
                cout << "mirrorData "<< mirrorData[j] << "is assigned: " 
                     << surveyData[i] << "\n";
            } else if (surveyData[i] == mirrorData[j]){
                mirrorData[j+1] = mirrorData[j+1] + 1;           
            } else if (surveyData[i] != mirrorData[j]) {}
           // cout << "Value " << mirrorData[j] << ", appeared :" << mirrorData[j+1]
                 //<< " times \n";
            j+=2;
        }
    }



    

}