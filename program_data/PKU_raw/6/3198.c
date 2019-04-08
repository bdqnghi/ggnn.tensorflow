void main()
{
	int k,i,j,t=0,sum[100]={0},*p;
	scanf("%d",&k);
	for(t=0;t<k;t++)
	{
		int m,n;
		scanf("%d%d",&m,&n);
		p=(int *)malloc(sizeof(int)*m*n);
		for(i=0;i<m;i++)
		{
	    	for(j=0;j<n;j++)
			{
	    		scanf("%d",p+i*n+j);
				if(i==0||i==m-1||j==0||j==n-1)sum[t]+=*(p+i*n+j);
			}
		}
	}
	for(t=0;t<k;t++)
		printf("%d\n",sum[t]);
}
