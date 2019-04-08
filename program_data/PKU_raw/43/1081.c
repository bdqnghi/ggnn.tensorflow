int main()
{
	int m,n,i,j,b,a[5000];
	scanf("%d",&m);
	n=b=0;
	for(j=3;j<m;j++)
	{
		for(i=2;i<=j/2;i++)
		{
			if(j%i==0)
			{
				n=1;
				break;
			}
		}
		if(n==0)
		{
			a[b]=j;
			b+=1;
		}
		else
		{
			n=0;
		}
	}
	for(i=0;i<=b;i++)
	{
		for(j=i;j<=b;j++)
		{
			if(m==a[i]+a[j])
			{
				printf("%d %d\n",a[i],a[j]);
			}
		}
	}
	return 0;
}