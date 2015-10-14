#include <iostream>
using namespace std;

// main() is where program execution begins.

int main()
{
    int n = 3; // n is an array of 10 integers
   int A[] = {3,4,5};
   int B[] = {22,22,23};// B[i] = t?ng ti?n t? c?a A???
   int S = 0;
   int c = 0;
   int temp = 0;
   for ( int i = 0; i <= n-1; i++ )
   {
       S = 0;
       
       temp = 0;
       for ( int j = 0; j <= n -1; j++ )
       {
          S += A[0];
          
          if(j > 0) {
              temp += A[j];
              S +=  temp;
              
          } 
          
       }
       // S không thay d?i giá tr? b?t ch?p i
       cout << "i = " << i << " S = " << S << " B[" << i << "] = " << B[i] << " ";
       
       if(B[i] == S) {
           c = c + 1; // c++;
           cout << "tang c= " << c << endl;
       }
   }
   
   return c;
}