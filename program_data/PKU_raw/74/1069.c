void main()
{
	int i,n,k,min,max,t=0,x=0,y,z=0,sum=0;
	int a[10]={0};
	scanf("%d %d",&min,&max);
	for(n=min;n<=max;n++)
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0) t++;
			else continue;
		}
		if(t==0)
		{
			y=n;
			for(i=0;i<=9;i++)
			{
				a[i]=y%10;
				y=y/10;
			}
			for(i=9;i>=0;i--)
			{
				if(a[i]!=0)
				{
					k=i;
					break;
				}
			}
			for(i=0;i<=k;i++)
				if(a[i]!=a[k-i]) x++;
			if(x==0) 
			{
				if(z==0)
				{
					printf("%d",n);
					z++;
				}
				else printf(",%d",n);
				sum++;
			}
		}
		x=0;
		t=0;
		k=0;
		for(i=0;i<=9;i++)
			a[i]=0;
	}
	if(sum==0) printf("no");
}