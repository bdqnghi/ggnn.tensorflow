int main()
{
	int k,i,j,l;
	int m[100],n[100];
	int sum[100]={0};
	int a[100][100][100];
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d %d",&m[i],&n[i]);
		
		for(j=0;j<m[i];j++){
			for(l=0;l<n[i];l++){
				scanf("%d",&a[j][l][i]);
			}
		}
	}
	for(i=0;i<k;i++){
		for(l=0;l<n[i]-1;l++){
			sum[i]+=a[0][l][i];
		}
		for(j=0;j<m[i]-1;j++){
			sum[i]+=a[j][n[i]-1][i];
		}
		for(l=n[i]-1;l>0;l--){
			sum[i]+=a[m[i]-1][l][i];
		}
		for(j=m[i]-1;j>0;j--){
			sum[i]+=a[j][0][i];
		}
		printf("%d\n",sum[i]);
	}
	return 0;
}