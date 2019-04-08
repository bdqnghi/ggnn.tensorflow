
int judgment(int n)
{
	int i,a=1;
	for (i=2;i<=(int)(floor( sqrt(n) ) );i++)
	{
		if (n%i==0)
			a=0;
	}
	return a;
}

int main()
{
	int n,i,j;
	scanf("%d",&n);
	for (j=6 ;j<=n;j=j+2)
	{
		for (i=3; i<=j;i=i+2)
		{
			if ((judgment(i)==0) || (judgment(j-i)==0))
				continue;
			else;
			{
				printf("%d=%d+%d\n",j,i,j-i);
				break;
			}
		}
	}
	return 0;
}
