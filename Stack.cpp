#include <iostream>
#define MAX 100
using namespace std;
class NODE{
public:
    int Data;
    NODE* pNext;
    NODE(int _data){
        Data=_data;
        pNext=NULL;
    }
};
class Stack{
private:
    NODE* pHead;
public:
    Stack(){
        pHead=NULL;
    }
    bool isEmpty(){
        return (pHead==NULL);
    }
    // int size(){
    //     return nTop;
    // }
    void push(int _data){
        NODE*p=new NODE(_data);
        p->pNext=pHead;
        pHead=p;
    }
    int pop(){
        NODE*p=pHead;
        int t=pHead->Data;
        pHead=pHead->pNext;
        delete p;
        return t;
    }
    int top(){
        return pHead->Data;
    }
};
int main (){
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl; s.pop();
    cout<<s.top()<<endl; s.pop();
    s.push(4);
    cout<<s.top()<<endl; s.pop();
    cout<<s.top()<<endl; s.pop();
}