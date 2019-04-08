void main()
{
	int n,k,s=1,i,y,j,a=1;
	scanf("%d %d",&n,&k);
	for (i=1;i<=100000000;i++)
	{
		s=i;
		for(j=1,y=1;j<=n-1;j++)
		{
			if((s*n+k)%(n-1)==0) s=(s*n+k)/(n-1);
			else y=0;
		}
		if(y) 
		{
			s=s*n+k;
			printf("%d\n",s);
			a=0;
		}
		if(a==0) break;
	}
}