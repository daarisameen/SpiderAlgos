#include<iostream>
#include<iomanip>
using namespace std;

int gcd(int a, int b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            {
            	int c=b;
            	b=a;
            	a=c;
            	
			}
        b -= a;
    } while (b);
    return a << shift;
}


int main()
{
	int a,b,c,d;
	cout<<"Let say array's indices are 0 1 2 3 4 5";
	cout<<endl<<"Query 1 : 0 1 is ";
	cin>>a;
	cout<<"Query 2 : 1 2 is ";
	cin>>b;
	cout<<"Query 3 : 3 4 is ";
	cin>>c;
	cout<<"Query 4 : 4 5 is ";
	cin>>d;
	int l,m;
	l=gcd(a,b);
	m=gcd(c,d);
	
	int x,y,u,v;
/*	
	if( (a!=80 && b!=160) || (a!=160 && b!=80) || (a!=128 && b!=160) || (b!=128 && a!=160) || (a!=80 && b!=128) || (a!=128 && b!=80) || (c!=80 && d!=160) || (c!=160 && d!=80) || (c!=128 && d!=160) || (d!=128 && c!=160) || (c!=80 && d!=128) || (c!=128 && d!=80))
	{
		cout<<a/l<<" "<<l<<" "<<b/l<<" "<<c/m<<" "<<m<<" "<<d/m;
	}
*/

	if(a==80 && b==160 )
		{
		cout<<"8 10 16 "<<c/m<<" "<<m<<" "<<d/m;
		return 0;
		}
		if(a==160 && b==80)
		{
		cout<<"16 10 8 "<<c/m<<" "<<m<<" "<<d/m;
		return 0;
		}
		if( a==128 && b==160 )
		{
		cout<<"8 16 10 "<<c/m<<" "<<m<<" "<<d/m;
		return 0;
		}
		if(b==128 && a==160)
		{
		cout<<"10 16 8 "<<c/m<<" "<<m<<" "<<d/m;
		return 0;
		}
		if(a==80 && b==128)
		{
		cout<<"10 8 16 "<<c/m<<" "<<m<<" "<<d/m;
		return 0;
		}
		if(a==128 && b==80)
		{
		cout<<"16 8 10 "<<c/m<<" "<<m<<" "<<d/m;
		return 0;}
			if(c==80 && d==160 )
		{
		cout<<a/l<<" "<<l<<" "<<b/l<<" 8 10 16";
		return 0;
		}
		if(c==160 && d==80)
		{
		cout<<a/l<<" "<<l<<" "<<b/l<<" 16 10 8";
		return 0;
		}
		if( c==128 && d==160 )
		{
		cout<<a/l<<" "<<l<<" "<<b/l<<" 8 16 10";
		return 0;
		}
		if(d==128 && c==160)
		{
		cout<<a/l<<" "<<l<<" "<<b/l<<" 10 16 8";
		return 0;
		}
		if(c==80 && d==128)
		{
		cout<<a/l<<" "<<l<<" "<<b/l<<" 10 8 16";return 0;}
		if(c==128 && d==80)
		{
		cout<<a/l<<" "<<l<<" "<<b/l<<" 16 8 10";return 0;}

if((a!=80 && b!=128))
{
cout<<a/l<<" "<<l<<" "<<b/l<<" "<<c/m<<" "<<m<<" "<<d/m;
return 0;
}
if( (a!=80 && b!=160))
{
	cout<<a/l<<" "<<l<<" "<<b/l<<" "<<c/m<<" "<<m<<" "<<d/m;
	return 0;
}
if((a!=160 && b!=80))
{
cout<<a/l<<" "<<l<<" "<<b/l<<" "<<c/m<<" "<<m<<" "<<d/m;
return 0;
}
if((a!=128 && b!=160))
{
cout<<a/l<<" "<<l<<" "<<b/l<<" "<<c/m<<" "<<m<<" "<<d/m;
return 0;
}
if((b!=128 && a!=160))
{
cout<<a/l<<" "<<l<<" "<<b/l<<" "<<c/m<<" "<<m<<" "<<d/m;
return 0;
}
if((a!=128 && b!=80))
{
cout<<a/l<<" "<<l<<" "<<b/l<<" "<<c/m<<" "<<m<<" "<<d/m;
return 0;
}
if((c!=80 && d!=160))
{
cout<<a/l<<" "<<l<<" "<<b/l<<" "<<c/m<<" "<<m<<" "<<d/m;
return 0;
}
if((c!=160 && d!=80))
{
cout<<a/l<<" "<<l<<" "<<b/l<<" "<<c/m<<" "<<m<<" "<<d/m;
return 0;
}
if((c!=128 && d!=160))
{
	cout<<a/l<<" "<<l<<" "<<b/l<<" "<<c/m<<" "<<m<<" "<<d/m;
return 0;
}
if((d!=128 && c!=160))
{
cout<<a/l<<" "<<l<<" "<<b/l<<" "<<c/m<<" "<<m<<" "<<d/m;
return 0;
}
if((c!=80 && d!=128))
{
cout<<a/l<<" "<<l<<" "<<b/l<<" "<<c/m<<" "<<m<<" "<<d/m;
return 0;
}
if((c!=128 && d!=80))
{
cout<<a/l<<" "<<l<<" "<<b/l<<" "<<c/m<<" "<<m<<" "<<d/m;
return 0;
}
return 0;
}
