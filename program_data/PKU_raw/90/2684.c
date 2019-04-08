int fpg(int M,int N)
{
	int i,K=1;
	if(N==1)
	{
		return K=1;
	}
    if(M<N)
	{
		K=fpg(M,N-1);
	}
	else
	{
	    K=fpg(M,N-1)+fpg(M-N,N);
	}
	return K;
}
int main()
{
	int i,n,a[100],b[100],c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		c[i]=fpg(a[i],b[i]);
		printf("%d\n",c[i]);
	}
	return 0;
}
