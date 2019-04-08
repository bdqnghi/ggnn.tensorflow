main()
{
	int N;
	scanf("%d",&N);
	int i,j,a[10000],n=0;
    int love;
    if(N<5)
    printf("empty");
    else
    {
    for(i=3;i<=N;i++)
    {
    	love=1;
    	for(j=3;j<i;j++)
    	{
    		if(i%j==0)
    		{
    			love=0;
    			break;
    		}
	    }
    if(love==1)
    {
	a[n]=i;
    n++;
    }
	}
    int k,m;
    for(k=0;k<n;k++)
    {
    	for(m=k+1;m<n;m++)
    	{
		if(a[m]-a[k]==2)
    	printf("%d %d\n",a[k],a[m]);
    }}
	}
}