main()
{
	int fan();
	int n,k,i,j,q,s[100];
	scanf("%d%d",&n,&k);
	for(i=1;;i++)
	{
		s[0]=i;
		q=1;
		for(j=1;j<n;j++)
		{
			s[j]=fan(s[j-1],k,n);
				if (s[j]==-1)
				{q=-1;
				break;}
		}
		if(q==1)
			break;
	}
	printf("%d",s[n-1]*n+k);
}
int fan(int a,int k,int n)
{
	if((a*n+k)%(n-1)!=0)
	{return -1;}
	else return (a*n+k)/(n-1);
	
}