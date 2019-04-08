void main()
{
	int n,a[301]={0},i,b[301]={0},temp=1,t=1,j,min,x;
	scanf("%d",&n);
	for( i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		temp=1;
		for(j=1;j<=i;j++)
		if(b[j]==a[i])
		{
			temp=0;
			break;
		}
		if(temp==1)
		{
			b[t]=a[i];
			t++;
		}
	}
	    for(i=1;i<t-1;i++)
    {
    	printf("%d,",b[i]);
    }
    printf("%d",b[t-1]);
}