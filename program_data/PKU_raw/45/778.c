void main()
{
	int i,j,m,n,t,k,s;
	char c,a[2][50];
	i=0;
	j=0;
	for(;;)
	{
		scanf("%c",&c);
		if(c==' ')
		{
			i=i+1;
			k=j;
			j=0;
		}
		a[i][j]=c;
		j=j+1;
		if(c=='\n')
			break;
	}
	for(m=0;;m=m+1)
	{
		s=m;
		t=0;
		for(n=0;n<k;n=n+1)
		{
			if(a[0][n]!=a[1][s])
			{
				t=1;
				break;
			}
			s=s+1;
		}
		if(t==0)
		{
			printf("%d",m-1);
			break;
		}
	}
}