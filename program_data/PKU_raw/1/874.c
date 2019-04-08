int main()
{
	int f(int a,int b);
	int n,a;

	cin>>n;
	while(n>0)
	{
		cin>>a;
		cout<<f(a,2)<<endl;
	n--;
	}
return 0;
}

int f(int a,int b)
{
	int i;
	int s=1;

	if(a<b)
		return 0;
	for(i=b;i<a;i++)
	{
		if(a%i==0)
			s=s+f(a/i,i);
	}
		return s;
}