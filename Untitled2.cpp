#include<iostream>
#include<string.h>
using namespace std;
int BOD(int n) 
{ 
	int num = n; 
	int dec_value = 0; 

	// Initializing base value to 1, i.e 2^0 
	int base = 1; 

	int temp = num; 
	while (temp) { 
		int last_digit = temp % 10; 
		temp = temp / 10; 

		dec_value += last_digit * base; 

		base = base * 2; 
	} 

	return dec_value; 
} 

void DOB(int n) 
{ 
	// array to store binary number 
	int binaryNum[32]; 

	// counter for binary array 
	int i = 0; 
	while (n > 0) { 

		// storing remainder in binary array 
		binaryNum[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 

	// printing binary array in reverse order 
	for (int j = i - 1; j >= 0; j--) 
		cout << binaryNum[j]; 
} 


int main()
{
	int n;
	cin>>n;
	
	int a;
	cin>>a;
	
int b = BOD(a);

if((b<15 && b>=9) || (b<7 && b>=5) || (b<31 && b>=17) ) 
{

DOB(b-1);
cout<<" ";
DOB(b+1);	
	
}

if(b==15 || b==16 || b==8 || b==7 || b==4 || b==32 || b==3 || b==31 || b==1 || b==2)
cout<<"-1";



}

