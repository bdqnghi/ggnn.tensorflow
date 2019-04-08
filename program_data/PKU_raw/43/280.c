int main()
{
	int m,i,j,k=0,s;
	int a[10000];
	int *p=a;
	
	scanf("%d",&m);

	for(i=3;i<m;i+=2)
	{
		s=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				s=1;
			}
		}
		if(s);
		else
		{
			*(p+k)=i;
			k++;
		}
	}
	for(i=0;i<=k;i++)
	{
		for(j=i;j<=k;j++)
		{
			if(a[i]+a[j]==m)
				printf("%d %d\n",a[i],a[j]);
		}
	}
	return 0;
}