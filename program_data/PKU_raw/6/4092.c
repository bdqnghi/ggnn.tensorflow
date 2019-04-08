int main()
{
	int x,m,n,s;
	scanf("%d\n",&x);
	for(s=0;s<x;s++){
		int a[100][100];
		int i,j,k,q=0,w=0,e=0,r=0,sum=0;
		scanf("%d %d",&m,&n);
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(k=0;k<n;k++){
			q+=a[0][k];
			w+=a[m-1][k];
		}
		k=0;
		for(k=0;k<m;k++){
			e+=a[k][0];
			r+=a[k][n-1];
		}
		sum=q+w+e+r-a[0][0]-a[m-1][n-1]-a[0][n-1]-a[m-1][0];
		printf("%d\n",sum);
	}
	return 0;
}