int sushu(int N)
{
	int i;
	if (N==2||N==3)
		return 1;
	else
	{
		for(i=2;i<=sqrt(N);i++)
		{
			if (N%i==0)
			{
			 return 0;
			}
		}
			return 1;
	}
}
int huiwen(int N)
{
	int i,a[100],n,m=0,p=1,t;
	n=N;	
	for (i=0;i<=4;i++)
	{  
		a[i]=N%10;
		N=N/10;
		if (N==0)
		{
			t=i;
			break;
		}
	}
    for (;i>=t/2;i--)
	{
		if (a[i]!=a[t-i])
        return 0;
	}
		return 1;
}
main()
{
	int m,n,i,a=0;
	scanf ("%d %d",&m,&n);
	for (i=m;i<=n;i++)
	{
		if (sushu(i)==1&&huiwen(i)==1)
		{
			if (a==0)
			{
				printf("%d",i);
				a=1;
			}
			else
				printf(",%d",i);
		}
	}
	if (a==0)
		printf ("no");
}