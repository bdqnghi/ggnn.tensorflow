int n,a[100],b=0,max=0;

void fun(int x,int m)
{
	int i;
	if(x==0)
	{
		if(b>max)
		{
			max=b;
		}
	}
	else if(a[x]<m)
	{
		fun(x-1,m);
	}
	else if(a[x]>=m)
	{
		for(i=x;i>=1;i--)
		{
			if(a[i]>=m)
			{
				b++;
				fun(i-1,a[i]);
				b--;
			}
		}
	}
}

void main()
{
	int i;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	fun(n,0);
	printf("%d",max);
}