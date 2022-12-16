#include <iostream>
using std::cin;
using std::cout;
#include <string>

using namespace std;

int main()
{
    //split the quare into half
   /* for (int row = 1; row <= 5; row++) {
        for (int hashNum = 1; hashNum <= 6-row ; hashNum++) {
            cout << "#";
        }
        cout << "\n";
    }*/
/*
Write a program that uses only two output statements, 
cout << "#" and cout << "\n", to produce a pattern of hash 
symbols shaped like a sideways triangle:
#
##
###
####
###
##
#*/
int a = 3;
for (int row = 0; row <= 7; row++){
    for (int i = 0; i < 4-abs(row-4); i++){
        cout << "#";
    }
    cout << "\n";
}

}
