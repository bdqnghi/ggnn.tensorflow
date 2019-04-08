

int main()
{
	int n,i;
	int a,num(int,int);
	
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a;
		cout<<num(2,a)+1<<endl;
	}	
	return 0;
}

int num(int m,int n)
{
	int i,count=0;
	int su(int);
	for (i=m;i<=(int)sqrt(n);i++)
		if (n%i==0)
		{
			count++;
			if (su(n/i)!=0)
				count+=num(i,n/i);
		}
	return count;
}

int su(int n)
{
	int i;
	for (i=2;i<n;i++)
		if (n%i==0)
		{
			return 1;
			break;
		}
	if (i==n)
		return 0;	
}