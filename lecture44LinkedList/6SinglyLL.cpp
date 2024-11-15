#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next; //Node* type ka pointer jo next node ko darsha rha hoga

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

int main()
{
    Node* node1= new Node(10); //creating node
    cout<<node1-> data<<endl;  //printing node
    cout<<node1 -> next <<endl;
    
    return 0;
}