void main()
{
	int m,n,i,j,k,l,a[100][100];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(j=0;j<n;j++)
			for(l=0;(l<m)&&(l<=j);l++)
				printf("%d\n",a[l][j-l]);
    for(i=1;i<m;i++)
		for(k=0;(k<m-i)&&(k<n);k++)
			printf("%d\n",a[i+k][n-k-1]);


}