int main()
{
	int n,m,j,k,mark;
	long double i;
	scanf("%d %d",&n,&k);
	for(i=k;i<1000000000;i++)
	{
		m=0;mark=1;
		m=i*n+k;
		for(j=1;j<n;j++)
		{
			if(m%(n-1)!=0)
			{mark=0;break;}
			else
				m=m/(n-1)*n+k;
		}
		if(mark!=0)
		{printf("%d",m);break;}
	}
	return 0;
}
