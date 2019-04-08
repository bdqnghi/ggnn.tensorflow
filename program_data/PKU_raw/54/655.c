void main()
{
	int n,m,k,a=1,i;
	scanf("%d %d",&n,&k);
	do
	{
	    m=n*a+k;
	    for(i=1;i<n;i++)
		{
		   if(m%(n-1)==0)
		   m=k+n*m/(n-1);
		   else break;
		}
		a++;
	}
	while(i<n);
	printf("%d",m);
}
