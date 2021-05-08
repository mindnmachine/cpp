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
	double output = factorial(n);
	cout << "factorial of " << n << " is " << output << endl;     
}
