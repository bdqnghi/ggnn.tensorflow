
int n,tj[1000],qw[1000];

void input(int a[])
{
	int i,j,t;
	for (i=0;i<n;i++)
	{
		scanf ("%d",a+i);
		for (j=i;j>0;j--)
			if (a[j]>a[j-1]) { t=a[j]; a[j]=a[j-1]; a[j-1]=t; }
			else break;
	}
}

horse()
{
	int m=0,tf=0,qf=0,ts=n-1,qs=n-1;
	while (tf<=ts)
	{
		if (tj[tf]>qw[qf]) { m++; tf++; qf++; }
		else if (tj[tf]<qw[qf]) { m--; ts--; qf++; }
		else
		{
			if (tj[ts]>qw[qs]) { m++; ts--; qs--; }
			else if (tj[ts]<qw[qs]) { m--; ts--; qf++; }
			else
			{
                if (tj[ts]<qw[qf]) { m--; ts--; qf++; } 
                else return m;
			}
		}
	}
	return m;
}

main()
{
	int money;
	scanf ("%d",&n);
	while (n)
	{
		input (tj);
		input (qw);
		money = horse ()*200;
		printf ("%d\n",money);
		scanf ("%d",&n);
	}
}