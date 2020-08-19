#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>

using namespace std;
int count=0;

void sym(int n,string a)
{
    int mid=(n)/2;
    char ch1[20];
    char ch2[20];
    for(int i=0;i<mid;i++)
    ch1[i]=a[i];
    for(int i=mid;i<n;i++)
    ch2[i-mid]=a[i];
    while(mid!=0)
    {
    if(!strcmp(ch1,ch2))
    {
        count++;
        sym(mid,a);
    }
    else
    break;
    }   
}

int main()
{
    int n;
    string a;
    cout<<"Enter the Size of 2^n : ";
    cin>>n;
    cout<<"Enter the String : ";
    cin>>a;
    cout<<a<<endl;
    sym(n,a);
    cout<<count;
    return 0;
}
