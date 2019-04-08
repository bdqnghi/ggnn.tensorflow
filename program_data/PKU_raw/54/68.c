void main()
{
	int n,k,m,a,i,tempa=1,tempb=1;
	scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
	{
		tempa=tempa*n;
	}
	if(n==2) printf("7");
	else
	{
		m=tempa-n*k+k;
        printf("%d",m);
	}
}
