int main ()
{
	int a,i,b,j,n=0,m=0;
	scanf("%d",&a);
	for(i=3;i<=a/2;i=i+2)
	{
		for (j=2;j<i;j++)
		{
			if (i%j!=0)
				n=n+1;
		}
		if (n==i-2)
		{
			b=a-i;
			for (j=2;j<b;j++)
			{
				if (b%j!=0)
					m=m+1;
			}
			if (m==b-2)
				printf ("%d %d\n",i,b);
		}
		n=0;
		m=0;
	}
	return 0;
}