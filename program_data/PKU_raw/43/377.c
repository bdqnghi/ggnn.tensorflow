int main()
{
	int n;
	cin>>n;
	int a,b;
	int i,j,l=0,k=0;
	for(i=3;i<=n/2;i=i+2)
	{
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{l=1;
			break;
			}
		}
		if(l==0)
		{
		   a=i;
		   b=n-a;
		}
		else
		{l=0;
			continue;
		}
		for(j=2;j*j<=b;j++)
		{
			if(b%j==0)
			{k=1;
			break;
			}
			else
			k=0;	
		}
		if(k==0)
		{
			cout<<a<<" "<<b<<endl;
			a=0;b=0;k=0;l=0;
		}
		else
		{continue;
		}
	}
	return 0;
}
