void main()
{
	int i,j,m=0,n,k,r;
	scanf("%d %d",&n,&k);
	for (i=1;m==0;i++)
	{
		m=(n-1)*i;
		r=m%(n-1);
		for (j=n;(j>0)&&(r==0);j=j-1)
		{
			m=n*m/(n-1)+k;
			r=m%(n-1);
		}
        if (r==0||j==0) m=m;
        else m=0;
	}
	printf("%d",m);
}
	