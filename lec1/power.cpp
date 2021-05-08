#include<iostream>
#include<time.h>
#include <bits/stdc++.h>
using namespace std;

double rpower(int x, int n){
	if(n == 0)
	  return 1;
	else if( n % 2 == 0)
	   return rpower(x,n/2) * rpower(x, n/2);
	else 
	   return x * rpower(x,n/2) * rpower(x,n/2);
}

double ipower(int x, int n){
	double answer = 1;
	int counter = 1;
	if(n == 0)
	  return 1;
	for(counter = 0; counter < n ; counter++)
            answer = answer * x;
	 return answer;
}

int main() {
	clock_t start, end;
	int x = 0 ,n = 0;
	cout <<  "Enter Number "; 
	cin >>x;
       	cout << "Power ";
	cin >> n;

	start = clock();
	ios_base::sync_with_stdio(false);
	double output = rpower( x, n);
	end = clock();

	double time_taken = double(end - start)/double(CLOCKS_PER_SEC);
	cout << "Value of " << x << " Power " << n <<" using recursion is " << output << " Time Taken is " <<  time_taken << setprecision(50) << endl;     

	time(&start);
	ios_base::sync_with_stdio(false);
	double output1 = ipower( x, n);
	time(&end);
	time_taken = double(end - start)/double(CLOCKS_PER_SEC);
	cout << "Value of " << x << " Power " << n <<" using iteration is " << output1 << " Time Taken is " <<  time_taken << setprecision(50) << endl;     
}
