#include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
Node(int data){
        value=data;
        next=NULL;
    }
};
int main(){
    Node* a=new Node(1);
cout<<a->value<<" "<<a->next<<endl;
}
//Output
/*1 0*/
