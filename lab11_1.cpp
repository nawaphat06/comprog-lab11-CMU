// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;

int main(){
    string grade[9] = {"A","B+","B","C+","C","D+","D","F","W"};
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    for(int i = 0; i < 3; i++){
        cin.get();
    }
    int x = rand()%9;
    cout << "You will get " << grade[x] <<" in this 261102.";
}