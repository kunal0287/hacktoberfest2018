#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
 a=a+b;
 b=a-b;
 a=a-b;
}

int main () 
{
   int x = 100;
   int y = 200; 
   cout<<"Before swap, value of a : "<<x<<endl;
   cout<<"Before swap, value of b : "<<y<<endl;
   swap(x, y);
   cout<<"After swap, value of a : "<<x<<endl;
   cout<<"After swap, value of b : "<<y<<endl;
 
   return 0;
}
