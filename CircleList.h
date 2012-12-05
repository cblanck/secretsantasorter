#include <stdio.h>
#include <cstdlib>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

struct node{
    string name;
    node* next;
};

class CircleList{
    public:
    CircleList();
    int getLength();
    void addName(string s);
    void mail();
    private:
    int length;
    node* head;
    node* tail;
};
