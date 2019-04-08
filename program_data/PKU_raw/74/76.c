int re(int a)
{
	int b=0;
	while(a!=0)
	{
		b=b*10+a%10;
	    a=a/10;
	}
	return(b);
}

void main()
{
	int m,n,i,k,j,p=0,q,a[300]={0};
	int re(int a);
	scanf("%d%d",&m,&n);
	i=m;
    k=0;
	for(i=m;i<=n;i++)
	{
		if(re(i)==i)
		{
			p=i;
			for(j=2;j<=sqrt(i);j++)
			{
				if(i%j==0) break;
				if(j>sqrt(i)-1)
				{	
					a[k]=i;
					k++;
				}
			}
		}
	}
	if(a[0]!=0)
	{
		printf("%d",a[0]);
        for(i=1;i<k;i++)
		{
		printf(",%d",a[i]);
		}
	}
	if(a[0]==0)
		printf("no");
}