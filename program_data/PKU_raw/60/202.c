void main()
{
	int n,i=0,j=0,f=0,re[100000]={0},flag=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j!=0)
			{
				f++;
			}
		}
			if(f==i/2-1)
			{
				re[i-1]=i;
			}
		
	}
	for(i=1;i<=n;i=i+2)
	{
		if((re[i-1]!=0)&&(re[i+1]!=0))
		{
			printf("%d %d\n",re[i-1],re[i+1]);
		}
		else
			flag++;
	}
	if(flag>=(n+1)/2)
	{
		printf("empty\n");
	}
	
}
