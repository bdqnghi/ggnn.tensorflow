int main()
{
	int m,n,q;
	int i,j,k;
	scanf("%d %d\n", &m,&q); 
	int A[100][100]={0};
	for (i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		scanf("%d",&A[i][j]);
	} 
    scanf("%d %d\n",&q,&n);
	int B[100][100]={0};
	for (i=0;i<q;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&B[i][j]);
	}
	int C[100][100]={0};
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		for(k=0;k<q;k++)
		{
			C[i][j]=C[i][j]+A[i][k]*B[k][j];
		}
	} 	
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(j!=n-1) printf("%d ",C[i][j]);
		else printf("%d",C[i][j]);
	    }
	  	printf("\n"); 
	}
} 