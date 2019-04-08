void main()
{
	int n,k,m,i,t=1,s=1;
	scanf("%d %d",&m,&k);
	for(i=0;i<=m-1;i++)
		t=t*m;
	for(i=0;i<=m-2;i++)
		s=s*(m-1);
	if(s>k)
	{
		n=t-k*(m-1);
		printf("%d",n);
	}
	else
	{
		n=2*t-k*(m-1);
		printf("%d",n);
	}
}
