void main()
{
	int i,n,k,m=1;
	scanf("%d %d",&n,&k);
	if(n==2)m=3*k+4;
	else {for(i=1;i<=n;i++)m=m*n;
	m=m-(n-1)*k;}
	printf("%d",m);
}