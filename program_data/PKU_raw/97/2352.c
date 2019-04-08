int main()
{int n,a,b,c,d,e,f;
cin>>n;
a=n/100;
cout<<a<<endl;
if(a!=0)
	n=n-100*a;
else n=n;
b=n/50;
cout<<b<<endl;
if(b!=0)
n=n-50*b;
else
	n=n;
c=n/20;
cout<<c<<endl;
if(c!=0)
	n=n-20*c;
else n=n;
d=n/10;
cout<<d<<endl;
if(d!=0)
	n=n-d*10;
else n=n;
e=n/5;
cout<<e<<endl;
if(e!=0)
	n=n-5*e;
else  n=n;
f=n;
cout<<f<<endl;
	return 0;}