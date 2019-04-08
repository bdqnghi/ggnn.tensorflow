int main()
{
	int s,m,n,i,j,k,sum=0;
	int a[100][100];
	scanf("%d",&s);
	for(k=0;k<s;k++){
		scanf("%d%d",&m,&n);
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<n;i++){
			sum+=a[0][i];
		}
		if(m>2){
			for(i=1;i<m-1;i++){
				sum+=a[i][0];
				sum+=a[i][n-1];
			}
		}
		if(m>1){
		for(i=0;i<n;i++){
			sum+=a[m-1][i];
		}
		}
		printf("%d\n",sum);
		sum=0;
	}
	return 0;
}
