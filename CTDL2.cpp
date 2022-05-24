#include <iostream>
using namespace std;

struct stack{
    int top;
    int data[100];
};
void SetupStack(stack &s){
    s.top=100;
}
bool isEmpty(stack s){
    if (s.top==-1) return true;
    return false;
}
bool isFull (stack s){
    if (s.top>=100) return true;
    return false;
}
int top (stack s){
    return s.data[s.top];
}
bool pop (stack &s){
    if (s.top==-1) return 0;
    s.top--;
    return 1;
}
bool push (stack &s, int _data){
    if (isFull(s) == false ){
        s.top++;
        s.data[s.top] = _data;
        return 1;
    } return 0;
}
int main(){
    stack s;
    SetupStack(s);
    
    cout<<top(s);
    pop(s);
    cout<<top(s);
    return 0;
}