int main()
{
    int n,m,A[200],i,p,q;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
     scanf("%d",&A[i]);
}
    for(p=1;p<=(n-m);p++)
	{
	   A[n+p]=A[p];
	}
	for(q=(n-m+1);q<(n+n-m);q++)
	{
	printf("%d ",A[q]);
	}
	printf("%d",A[n+n-m]);
   return 0;
}