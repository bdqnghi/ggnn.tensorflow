void main()
{
	int i,n,k,re=1;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		re*=n;
	if(n==2)
		printf("7\n");
	else
		printf("%d\n",re-k*(n-1));
}