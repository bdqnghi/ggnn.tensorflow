int f(int m,int n)
{
	int a=1;
	if(m>1&&n>1&&m>=n)
	a=f(m,n-1)+f(m-n,n);
	if(m>1&&n>1&&m<n) a=f(m,n-1);
	return(a);
}
void main()
{
	int k,m[10],n[10],y[10],i;
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%d %d",&m[i],&n[i]);
	for(i=0;i<k;i++)
		y[i]=f(m[i],n[i]);
	for(i=0;i<k;i++)
	printf("%d\n",y[i]);
}