char comp(int point, int up, int down, int left, int right)
{
	return ((point>=up)&&(point>=down)&&(point>=left)&&(point>=right));
}
main()
{
	int a[22][22],j,k,m,n;
	scanf("%d%d",&m,&n);
	for(j=0;j<m+2; ++j) {a[j][0]=-1; a[j][n+1]=-1;}    // ?????
	for(k=1;k<n+1; ++k) { a[0][k]=-1; a[m+1][k]=-1;}    // ?????
	for(j=1;j<m+1; ++j)
		for(k=1;k<n+1;++k)
			scanf("%d",&a[j][k]);   // ??????????1~m??1~n?
	for(j=1;j<m+1; ++j)
		for(k=1;k<n+1;++k)
			if(comp(a[j][k],a[j-1][k],a[j+1][k],a[j][k-1],a[j][k+1]))
				printf("%d %d\n",j-1,k-1);
}
