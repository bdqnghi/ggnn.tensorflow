void f(int n)
{
if(n==1)
{cout<<"End";
return;
}
if(n%2==0)
{cout<<n<<'/'<<2<<'='<<n/2<<endl;
f(n/2);
}
if(n%2==1)
{cout<<n<<'*'<<3<<'+'<<1<<'='<<3*n+1<<endl;
f(3*n+1);
}
}
int main()
{
	int n;
	cin>>n;
	f(n);
}