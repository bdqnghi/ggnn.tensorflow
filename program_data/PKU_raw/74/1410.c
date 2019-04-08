
int num(int x)
{
	int i;
	for (i=2;i<x;i++)
	{
		if (x%i==0)
			return 0;
	}
	return 1;
}

int averse(int x)
{
	int i,j,a[100]={0};
	for (i=0,j=10;;i++)
	{
		a[i]=x%10;
		x=x/10;
		if (x==0)
			break;
	}
	for (j=0;j<=i;j++)
	{
		if (a[j]!=a[i-j])
			return 0;
	}
	return 1;
}

void main()
{
	int x,m,n,enter=1,mark=0;
	scanf ("%d %d",&m,&n);
	for (x=m;x<=n;x++)
	{
		if (num(x)==1 && averse(x)==1)
		{
			mark=1;
			if (enter==1)
			{
				enter=0;
				printf ("%d",x);
			}
			else
				printf (",%d",x);
		}
	}
	if (mark==0)
		printf ("no");
}