int fen(int m,int n)
{
	if(n==1||m==1)
	return 1;
	else if(n==0&&m==0)
	return 1;
	else if(m<0)
	return 0;
	else
	return fen(m,n-1)+fen(m-n,n);
}
main ()
{
	int t,m,n,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d",&m,&n);
		printf("%d\n",fen(m,n));
	}
}
		
	
	