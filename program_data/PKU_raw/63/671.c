int main()
{
	int a[100][100],b[100][100],c[100][100]={0},n,m,q,i,j,z;
	scanf("%d%d\n",&m,&q);
	for(i=0;i<m;i++)
		for(j=0;j<q;j++)
			scanf("%d",&a[i][j]);
	scanf("%d%d\n",&q,&n);
	for(i=0;i<q;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			for(z=0;z<q;z++)
				c[i][j]+=(a[i][z]*b[z][j]);
			printf(j==n-1?"%d\n":"%d ",c[i][j]);
		}
	return 0;
}