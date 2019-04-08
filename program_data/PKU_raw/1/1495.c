
int function(int a, int m)
{
	int sum=1,i;
	if(a>m)
		return 0;
	else
	{
		for(i=a;i<m;i++)
		{
			if(m%i==0)
				sum=sum+function(i,m/i);
		    else 
			continue;
		}
	return sum;

	}
}

void main()
{
	int n,i,m[100];

	scanf("%d",&n);

	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&m[i]);
	}

	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",function(2,m[i]));

	}
}


