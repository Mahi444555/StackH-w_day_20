//program for stack implematation using stucture 
#include<iostream>
using namespace std;

struct stack
{
    int st[5];  //here i'm declaring one array of name st in stack so to access it we have always acces it by stucture vaible .st
    int top;
};
typedef struct stack stack;  //typedef used for to update the name of any datatype 

stack s;    //creating vairblae or object of stack



void push()
{
    if(s.top == 4)      //if n=5 then 0 to 4 is limit and n-1 is top elemnt or it's fulled
    {
        cout<<endl<<"Sorry your stack is full overflowing ";
    }
    else
    {
        s.top++;    // -1 to 0
        cout<<endl<<"Enter the elemnt at: "<<s.top<<"\t";
        cin>>s.st[s.top];
        cout<<endl<<s.st[s.top]<<"is pushed in stack";
    }
}


void pop()      //used to delete the element from top to bottom 
{
    if(s.top == -1)     //-1 indicates no elemnts in stack is below zero 
    {
        cout<<endl<<"Sorry your stack is empty ";
    }
    else
    {
        cout<<endl<<s.top<<": location elemnts is peeped or deleted: ";
        s.top--;    //4-1=3 then 3-1=2 then 2-1=1 then 1-1=0 then 0-1 =-1 empty
    }
}

void peep()     //used to show top most elemnt in stack
{
    if(s.top == -1)
    {
        cout<<endl<<"Sorry your stack is empty ";
    }
    else
    {
        cout<<endl<<"peep element is: "<<s.st[s.top];
        s.top--;
    }
}

void isempty()
{
    if(s.top == -1)
    {
        cout<<endl<<"Yes it is empty ";
    }
    else
    {
        cout<<endl<<"no stack having some elements ";
    }
}

void isfull()
{
    if(s.top == 4)
    {
        cout<<endl<<"Yes it is full ";
    }
    else
    {
        cout<<endl<<"nops...either empty or someElements ";
    }
}

void disp()
{
    cout<<endl<<"display the elements from stack ";
    for(int i=s.top;i>=0;i--)   //top is at now any places like 4rth 3rd or 2dn or 1 0 
    {
        cout<<endl<<s.st[i];    //displaing elemnts from stack 
    }
}

int main()
{
    int ch;
    s.top = -1;  //to access top used with stucture vairble.top -1 indicates it's empty now

    do{
        cout<<endl<<"ENTER STACK MENU: ";
        cout<<endl<<"Enter 1. push: ";
        cout<<endl<<"Enter 2. pop: ";
        cout<<endl<<"Enter 3. peep: ";
        cout<<endl<<"Enter 4. isempty: ";
        cout<<endl<<"Enter 5. isfull: ";
        cout<<endl<<"Enter 6. display: ";
        cout<<endl<<"Enter 7. Exit: ";  //if we enter greater than 6 or less than 0 it will terminate

    cout<<endl<<endl<<"Enter the choice: ";
    cin>>ch;

    switch (ch)
    {
    case 1:
            push();
        break;
    
    case 2: 
            pop();
            break;
    
    case 3: 
            peep();
            break;
    
    case 4: 
            isempty();
            break;
    
    case 5:
            isfull();
            break;
    
    case 6:
            disp();
            break;
    
    
    }

    }while(ch>=1 && ch<=6);

}