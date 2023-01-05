#include<iostream>
using namespace std;
int stack[5], n=5,top=-1;
void push(int item)
 {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=item;
   }
}
void pop() 
   {
   if(top<=-1)
   {
   cout<<"Stack is emty "<<endl;
   }
   else
  {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
  }
void display()
  {
   if(top>=0)
   {
      cout<<"Stack elements are:"<<endl;
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<endl; 
   } else
   cout<<"Stack is empty";
}
int main()
 {
   int ch,item; 
   cout<<"1. Push "<<endl;
   cout<<"2. Pop "<<endl;
   cout<<"3. Display "<<endl;
   cout<<"4. Exit"<<endl;
   while(ch<=4)
    {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch)
        {
         case 1:
           {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>item;
            push(item);
            break;
           }
         case 2:
         {
            pop();
            break;
         }
         case 3:
          {
            display();
            break;
         }
         case 4:
        {
            cout<<"Exit"<<endl;
            break;
         }
         default:
         {
            cout<<"Wrong Choice!"<<endl;
         }
      }
   }
   return 0;
}
