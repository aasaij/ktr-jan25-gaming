//Problem 1:
//A company is transmitting data to another server. The data is in the form of numbers. To secure the data during transmission, they plan to obtain a security key that will be sent along with the data. The security key is identified as the count of the repeating digits in the data
//Write an algorithm to find the security key for the data.
//
//Input :
//The input consists of an integer data, representing the data to be transmitted.
//
//Output:
//Print an integer representing the security key for the given data. If no data is repeated it should display none
//Sample Input:
//578378923
//Output : 3
//Explanation
//The repeated digits in the data are 7,8 and 3. So, the security key is 3.

#include <stdio.h>
int main(){
	unsigned long long int x;// = 578378923;
	int freq[10] = {0}, cnt=0;
//	scanf("%llu", &x);
	while(freq[x%10]++,x/=10);
	for (int i = 0; i<10;freq[i]>1?cnt++:cnt,i++);
	printf("%d", cnt);
	return 0;
}

