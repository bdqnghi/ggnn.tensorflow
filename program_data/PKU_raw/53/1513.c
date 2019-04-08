int main()
{
	int n,k[300]={99999},i,j,b,p,u=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
		b=1;
		for(j=0;j<u;j++)
			if(k[j]==p) {b=0;break;}
			if(b) {k[u]=p;u++;}
	}
	for(j=0;j<u-1;j++)
		printf("%d,",k[j]);
	printf("%d",k[u-1]);
	return 0;
}