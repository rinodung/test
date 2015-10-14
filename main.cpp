#include <iostream>
using namespace std;

// main() is where program execution begins.

int main()
{
    int n = 3; // n is an array of 10 integers
   int A[] = {3,4,5};
   int B[] = {22,22,23};// B[i] = tong tien to cua A???
   int S = 0;
   int c = 0;
   for ( int i = 0; i <= n-1; i++ )
   {
       S = 0;
       
       
       for ( int j = 0; j <= n -1; j++ )
       {
          S += A[0];
          for ( int k = 1; k <= j; k++ )
          {
            S += A[k];
          }
          
       }
       // S khong thay doi bat chap i
       cout << "i = " << i << " S = " << S << " B[" << i << "] = " << B[i] << " ";
       
       if(B[i] == S) {
           c = c + 1; // c++;
           cout << "tang c= " << c ;		   
       }
	   cout << endl;
   }
   
   return c;
}