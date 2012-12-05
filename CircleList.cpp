#include "CircleList.h"

CircleList::CircleList(){
    head = NULL;
    length = 0;
}

int CircleList::getLength(){
    return length;
}

void CircleList::addName(string s){
    if(head == NULL){
        head = new node;
        head->name = s;
        head->next = head;
        tail = head;
    }else{
        node* toAdd = new node;
        toAdd->name = s;
        toAdd->next = head;
        tail->next = toAdd;
        tail = toAdd;
    }
}

void CircleList::mail(){
    node* temp = head;
    string sender;
    string recipient;
    string tempStr;
    do{
        sender = temp->name;
        recipient = temp->next->name;
        printf("Telling %s that s/he has to give a gift to: %s\n", sender.c_str(), recipient.c_str());
        tempStr = "echo \"Your secret santa target is "+ recipient + "\" | mailx -s Secret\\ Santa "+ sender;
        cerr << "System call: " << tempStr << endl;
        //system(tempStr.c_str());
        temp = temp->next;
    }while(temp!=head);
}
