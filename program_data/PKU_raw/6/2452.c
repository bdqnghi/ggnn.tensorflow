int main()
{
	int n,m1[120],m2[120],a[100][120][120];
	int i,j,k,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&m1[i],&m2[i]);
		for(j=0;j<m1[i];j++)
			for(k=0;k<m2[i];k++)
				scanf("%d",&a[i][j][k]);
	}

	for(i=0;i<n;i++){
		if(m1[i]==1){
		for(j=0;j<m2[i];j++)s=s+a[i][0][j];}
		else if(m2[i]==1){
		for(j=0;j<m1[i];j++)s=s+a[i][j][0];}
		else{
		for(j=0;j<m2[i]-1;j++)
			s=s+a[i][0][j];
		for(j=0;j<m1[i]-1;j++)
			s=s+a[i][j][m2[i]-1];
		for(j=m2[i]-1;j>0;j--)
			s=s+a[i][m1[i]-1][j];
		for(j=m1[i]-1;j>0;j--)
			s=s+a[i][j][0];
		}
	printf("%d\n",s);
	s=0;
	}
	return 0;
}