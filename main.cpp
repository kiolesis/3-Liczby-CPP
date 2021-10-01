#include <iostream>
#include <cmath>

using namespace std;

int min(int a,int b,int c)
{
	if(a<b && a<c)return a;
	if(b<a && b<c)return b;
	if(c<a && c<b)return c;
}
main()
{
	int a,b,c;
	cout<<"Podaj 3 liczby";
	cin>>a>>b>>c;
	cout<<min(a,b,c);
}
