#include <stdio.h> 

int josephus(int n, int k) 
{ 
if (n == 1) 
	return 1; 
else
	return (josephus(n - 1, k) + k-1) % n + 1; 
} 


int main() 
{ 
int n,k;
printf("Enter the number of people and the number of people to skip.\n");
scanf("%d %d",&n,&k);
printf("The safe place is %d", josephus(n, k)); 
return 0; 
} 
