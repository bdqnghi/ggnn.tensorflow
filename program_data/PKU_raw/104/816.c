int shangyigejiedian(int);

int main()
{
	int m,n,a,b;
	cin>>a>>b;
	m=a;
	n=b;

	do
	{a=m;
	do
	{
		if (a==b) 
		{
			cout<<a<<endl;
			return 0;
		}
		else a=shangyigejiedian(a);

	}while(a>=1);

	b=shangyigejiedian(b);
	}while(b>=1);

	return 0;
}

int shangyigejiedian(int i)
{
	int shangyigejiedian;
	if(i==1) return 0;
	else
	{
		if(i%2==0) return i/2;
		else return(i-1)/2;
	}
}