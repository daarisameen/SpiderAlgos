#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main() {
 string n,a,b;
 cin>>n;
 int r,x,y;
 cin>>r>>x>>y;
 //int m=n.length();
int k=r;

 
 getline(cin,a);
 getline(cin,b);
 

 
 for(int i=0;i<n.length();i++)
 {
 	if(a[i]=='1')
 	{
 		if(b[i]=='1')
 		r+=x;
 		
 		else if(b[i]=='0')
 		r-=y;
	 }
 }
 if(r>k)
 cout<<"promoted";
 
 else if(r<k)
 cout<<"demoted";
 
 else
 cout<<"no change"; 
 return 0;
}

