void main()
{
	int f(int i);
	int m,n,i,h=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(f(i)==1)
		{
			if(h==0)
			{
				printf("%d",i);
				h=1;
			}
			else
			{
				printf(",%d",i);
			}
		}
	}
	if(h==0)
		printf("no");
}
int f(int i)
{
	int j,t,sum,k;
	t=0;
	sum=0;
	k=i;
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			t=1;
			break;
		}
	}
	if(t==0)
	{
		do
		{
			sum=sum*10+i%10;
			i=i/10;
		}
		while(i!=0);
	  if(sum==k)
		return(1);
	}
	else
		return(0);
}


