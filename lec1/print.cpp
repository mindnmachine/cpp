#include<iostream>
#include<time.h>
#include <bits/stdc++.h>
using namespace std;

void print(int n){
	if(n == 1){
	   cout << n << " ";
	  return ;
	}
	else{
	   print(n-1);
	   cout << n << " ";
         }
}

int main() {
	clock_t start, end;
	int x = 0 ,n = 0;
	cout <<  "Enter Number "; 
	cin >>x;

	start = clock();
	ios_base::sync_with_stdio(false);
	print(x);
	end = clock();

	double time_taken = double(end - start)/double(CLOCKS_PER_SEC);
	cout << " Time Taken is " <<  time_taken << setprecision(50) << endl;     

}
