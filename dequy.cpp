#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;



int de_quy_giai_thua(int n) {
    int s =1;
    if(n == 1) s = 1;
    else {
        s= n * de_quy_giai_thua(n-1);
    }
    return s;
}

int de_quy_x(int n, int x) {
    int s =1;
    if(n == 1) {
        s = x;
    }
    else {
        s= x * de_quy_x(n -1, x);
    }
    cout <<"de_quy_x n: " <<n <<" return =>" << s << endl;
    return s;
}

// main() is where program execution begins.
float tinhtong(int n, int x){
    
	float s = 0;
	int X = 1;
	int gt = 1;

	
	
	gt = de_quy_giai_thua(n);
	X = de_quy_x(n,x);
	
	s += float(X)/float(gt);
	
	cout << "Tinh Tong n= " << n << " float(X): " << float(X)<<" float(gt): "<< float(X) << " s: "<< s <<endl;
	return s;
	
	
}

float dequy(int n, int x){
    
    
    float s = 0;
    if(n == 1) {
        s = x;
    } else {
        s= tinhtong(n,x) + dequy(n-1,x);
    }
    
    cout << "De quy n= " << n << "s: "<< s <<endl;
    return s;
}
int main()
{
   int n = 3; // n is an array of 10 integers
   int x = 2;
   float s=0;
   s = dequy(n, x);
   
   
   cout << "Ket Qua: " <<s;
   cout << endl;
}
