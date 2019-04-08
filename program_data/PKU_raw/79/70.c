int king(int N,int M)
{
	int A[300]={0};
	int B[300]={0};
	int m0;
	int i,j;
	for(i=0;i<N;i++)
		A[i]=i+1;
	for(i=1;i<N;i++)
	{
		for(j=0;j<(N-i);j++)
		{
			
			m0=M%(N+1-i);
			if(j<N-i+1-m0)
				B[j]=A[m0+j];
			else if(j>=N-i+1-m0)
				B[j]=A[j+m0-N+i-1];
		}
		for(j=0;j<(N-i);j++)
			A[j]=B[j];
	}
		return A[0];
}
void main()
{
	int a[100],b[100];
	int i;
	int n=0;
	for(i=0;;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		n=n+1;
		if(a[i]==0&&b[i]==0)
			break;
	}
	n=n-1;
	for(i=0;i<n;i++)
	printf("%d\n",king(a[i],b[i]));

}
