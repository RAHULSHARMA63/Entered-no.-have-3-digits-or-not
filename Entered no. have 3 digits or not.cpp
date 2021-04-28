#include <iostream>
using namespace std;
int main()
{
   int a;
   cout << "enter a three digit number: ";
   cin >> a;
   if(a>=100 && a<1000)
   {
     if(a%2!=0)
	  {	  
       cout << "the number you choose is: " << a << endl;
      }  
   else
      {
       cout << "entered number is not of 3 digits. " << endl;
      }
   return 0;
    }
}
