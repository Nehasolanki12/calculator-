#include<iostream>
using namespace std;
int main()
{int num1, num2;
 char x;
 
 cout<<"enter your first number"<<endl;
 cin>>num1;
 cout<<"enter your second number"<<endl;
  cin>>num2;

 cout<<"If you want to add numbers then tap A "<<endl;
 cout<<"If you want to subtract numbers then tap B "<<endl;
 cout<<"If you want product of numbers then tap C "<<endl;
 cout<<"If you want division of numbers then tap D "<<endl;
 cout<<"If you want remainder of  numbers then tap E  "<<endl;
cin>>x;
 if(x=='a')
 {
   cout<<"the sum of two numbers= "<<num1+num2<<endl;
 }

 
 else if(x== 'b')
  {
    cout<<"the subtraction of two numbers= "<<num1-num2<<endl;
  }

 else if(x== 'c')
  {
    cout<<"the product of two numbers= "<<num1*num2<<endl;
  }

 else if(x== 'd')
  {
    cout<<"the division of two numbers= "<<num1/num2<<endl;
  }
  else if(x== 'e')
   {
     cout<<"the remainder of two numbers= "<<num1%num2<<endl;
   }
 else{
   cout<<"invalid input "<<endl;
 }
  return 0;
}
