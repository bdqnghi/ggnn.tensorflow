main()
{
	int h,i,j,k,l,m,n;
	scanf("%d %d",&n,&k);
	l=0;
	for(i=1;l==0;i++)
	{
		m=i*n+k;
		h=0;
		for(j=2;j<=n&&h==0;j++)
		{
			if(m%(n-1)==0)
			{
				m=m/(n-1)*n+k;
			}
			else
			{
				h=1;
				break;
			}
		}
		if(h!=0) h=h;
                  
                     else

		{
			printf("%d\n",m);
			l=1;
			break;
		}
	}
}