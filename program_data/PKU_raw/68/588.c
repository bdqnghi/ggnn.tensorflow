
int judge(int n)
{int i;
	for (i=2;i<sqrt(n)+1;i++)
	{
		if (n%i==0)
			break;
	}
	if (i>(sqrt(n)+1))
		return 1;
	else 
		return 0;
}

main ()
{
	int i,n,m,j,k,l;
	scanf ("%d",&n);
	m=n/2;
	for (i=3;i<=m;i++)
	{
		for (j=3;j<=m;j++)
		{
			l=i*2-j;
			k=2*i;
			if ((judge(j)==1)&&(judge(l)==1))
			{printf ("%d=%d+%d\n",k,j,l);
			break;}
		}
	}

}