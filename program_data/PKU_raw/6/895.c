void main()
{
	int m,n,a[100][100],i,j,sum,t;
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d %d",&m,&n);
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)scanf("%d",&a[i][j]);
		if(m>1)for(i=0;i<m;i++)sum+=a[i][0]+a[i][n-1];
		else for(i=0;i<m;i++)sum+=a[i][0];
		if(n>1)for(i=1;i<n-1;i++)sum+=a[0][i]+a[m-1][i];
		else for(i=1;i<n-1;i++)sum+=a[0][i];
		printf("%d\n",sum);
	}
}