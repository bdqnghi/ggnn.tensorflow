int a[25];
int fact(int b)
{
	if(b==1)
	{
		a[1]=1;
		return a[1];
	}
	else if(b==2)
	{
		a[2]=1;
		return a[2];
	}
	else
	{
		a[b]=fact(b-1)+fact(b-2);
		return a[b];
	}
}

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int p;
		cin>>p;
		cout<<fact(p)<<endl;
	}
	return 0;
}
