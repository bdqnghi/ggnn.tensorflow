main()
{
	int x,i,j,k,l;
	scanf("%d",&x);
	for (i=3;i<=x/2;i+=2)
	{
		l=0;
		j=x-i;
		for(k=2;k<=i-1;k++)
		{
			l=l+!(i%k);
		}
		for (k=2;k<j;k++)
		{
			l+=!(j%k);
		}
		if (!l) printf("%d %d\n",i,j);
	}




}