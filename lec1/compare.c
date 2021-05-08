#include <stdio.h> 

int usingLoops() { 
		int i, sum =0; 
		for (i = 0; i < 10; ++i) { 
			sum++; 
		} 
		return sum; 
}	 

int usingRecursion(int limit, int sum, int counter) { 
	if (counter < limit) { 
		counter++; 
		usingRecursion(limit, sum+1, counter); 
	} 
	else 
		return sum; 

} 


int main() { 
		int sum=0, limit=10, counter=0, FromLoops, FromRecursion; 

		FromLoops = usingLoops(); 
		FromRecursion = usingRecursion(limit,sum,counter); 

		printf("Using Loops : %d\n",FromLoops); 
		printf("Using Recursion : %d",FromRecursion); 

} 
 
