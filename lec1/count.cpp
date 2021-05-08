#include<iostream>
using namespace std;

int count(int n){

	if(n == 0)
	  return 0;
	int smallAns = count(n/10);
        return ++smallAns;
}

int main() {
	int n;
	cin >> n;
	double output = count(n);
	cout << "number of digits " << n << " is " << output << endl;     
}
