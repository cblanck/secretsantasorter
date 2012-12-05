#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>

#include "CircleList.h"
using namespace std;


int main(){
    string in;
    vector<string> names;
    string name;
    cout << "Input emails to be sorted (type 'done' when done) \n";
    while(1){
        cin >> name;
        if(name == "done"){
            break;
        }else{
            names.push_back(name);
        }
    }
    CircleList cList;
    int length = names.size();
    int randNum;
    srand(time(NULL));
    for(int i=0; i<length; i++){
        randNum = rand()%names.size();
        cList.addName(names[randNum]);
        names.erase(names.begin() + (randNum));
    }
    cList.mail();
    return 0;
}
