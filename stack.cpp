#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

#define size 5

struct stack {
    int s[size];
    int top;
} st;

int stackFull()
{
if(st.top>=size-1)
return 1;
else
return 0;
}
int stackEmpty()
{
    if(st.top==-1)
    return 1;
    else
    return 0;
}
void push(int item)
{
    st.top++;
    st.s[st.top]=item;
}
int pop()
{
    int item;
    item=st.s[st.top];
    st.top--;
    return(item);
}
void display()
{
    int i;
    if(stackEmpty())
    cout<<"\n Stack is Empty";
    else{
        cout<<"\n Element of stack :";
        for(i=st.top;i>=0;i--)
        cout<<" "<<st.s[i];
    }
}
int main()
{
 int item ,ch;
 st.top=-1;
 
 cout<<"\n Stack Implenentatation";

 do
 {
    cout<<"\n 1:push";
    cout<<"\n 2:pop";
    cout<<"\n 3:display";
    cout<<"\n 4:Exit";

    cout<<"\n Select Opertion :";
    cin>>ch;

    switch(ch)
    {
      case 1:
      cout<<"\n Enter the item to be pushed :";
      cin>>item;


      if(stackFull())
      cout<<"\n Stack is Full(Overflow)";
      else
       push(item);

       break; 
       case 2:
       if(stackEmpty())
       {
        cout<<"\n Stack is Empty (underflow)";
       }
       else{
        item=pop();
        cout<<"\n The Popped element is"<<item;
       }
       break;
       case 3:
       display();
       break;
       case 4:
       cout<<"end of Program..";

    }
 }
 while(ch!=4);
 getch(); 
}