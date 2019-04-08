main()
{
    int s[1000][1000],i,j,a,b,c,d,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
       {
		scanf("%d",&s[i][j]);
	  }
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
	    if(s[i][j]==0) {a=i;b=j;goto A;}
	}
	A:for(i=n-1;i>=0;i--)
	for(j=n-1;j>=0;j--)
	   if(s[i][j]==0) {c=i;d=j;goto B;}
	B:sum=(c-a-1)*(d-b-1);
	printf("%d\n",sum);
}