#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

int main()
{
    Node* head = new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* c= new Node(40);
   
    head->next=a;
    a->next=b;
    b->next=c;
    
    cout<<head->value<<endl;  
    cout<<a->value<<endl;  
    cout<<b->value<<endl;  
    cout<<c->value<<endl;  
    cout<<head->next->value<<endl; 
    cout<<(*(*head).next).value<<endl;//ata use korbo na.akon theke arrow sign use korbo no dot use.

    return 0;
}