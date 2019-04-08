int f(int h)
{
	int a[15],i,j,n,m=0;
	a[0]=h;
	if(a[0]==-1)return -1;
	else
	{
		for(i=1;i<=15;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]==0)break;
		}
		n=i;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]==a[j]*2)
				{
					m+=1;
					break;
				}
			}
		}
		return(m);
	}
}
void main()
{
	int a[100],h,i=0;
	while(1)
	{
		scanf("%d",&h);
		a[i]=f(h);
		if(a[i]==-1)break;
		i++;
	}
	printf("%d",a[0]);
	for(i=1;a[i]!=-1;i++)
	{
		printf("\n%d",a[i]);
	}
}
