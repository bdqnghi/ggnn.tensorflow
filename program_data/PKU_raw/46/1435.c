void main()
{
	int m,n,m1,m2,n1,n2;
	int i,j,a[100][100];
	scanf("%d%d",&m,&n);

	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);

    m1=m-1;
	n1=n-1;
	m2=0;
	n2=0;
	while(m1>m2&&n1>n2)
	{
		for(i=m2,j=n2;j<n1;j++)
			printf("%d\n",a[i][j]);

	    for(i=m2,j=n1;i<m1;i++)
		    printf("%d\n",a[i][j]);

	    for(i=m1,j=n1;j>n2;j--)
		    printf("%d\n",a[i][j]);

	    for(i=m1,j=n2;i>m2;i--)
		    printf("%d\n",a[i][j]);
		m1--;
		n1--;
		m2++;
		n2++;
	}
	if(m1==m2&&n1==n2)
		printf("%d\n",a[m1][n1]);
	else if(m1==m2)
		for(j=n2;j<=n1;j++)
			printf("%d\n",a[m1][j]);
		else
			for(i=m2;i<=m1;i++)
			    printf("%d\n",a[i][n1]);
}









  
