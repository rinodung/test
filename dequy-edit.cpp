#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

// main() is where program execution begins.

int main()
{
   int n = 3; // n is an array of 10 integers
   int x = 2;
   float s=0;
   int gt= 1;
   int X = 1;
   for ( int i = 1; i <= n; i++ )
   {
       
        gt *= i;
	    X *= x;
       
	   s += float(X)/float(gt);
	   cout << gt << ": "<< X << " float(X/gt):" << float(X)/float(gt) <<endl;
   }
   
  
   cout << "Ket Qua: " <<s;
	   cout << endl;
}