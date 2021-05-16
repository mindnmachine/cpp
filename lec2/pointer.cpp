#include<iostream>
using namespace std;

double factorial(int n){
	if(n ==0)
	  return 1;
	double smallOutput = factorial(n-1);
        return n * smallOutput;
}

int main() {
	int n;
	cin >> n;
	cout << &n <<endl;
        int *p = &n;
        cout << p << endl;
        cout << *p << endl;

	float f = 10.2;
	float *pf = &f;
        cout << pf << endl;
        cout << *pf << endl;

	double d = 1123.121;
	double *pd = &d;
        cout << pd << endl;
        cout << *pd << endl;
}

