int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k,sum,x,y;
	int a[100],b[100],ar[100][100];
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		x=a[i]-1;
		y=b[i]-1;
		for(j=0;j<a[i];j++){
			for(k=0;k<b[i];k++){
				scanf("%d",&ar[j][k]);
			}
		}
		sum=0;
		for(j=0;j<a[i];j++){
			sum=sum+ar[j][0]+ar[j][y];
		}
		for(k=0;k<b[i];k++){
			sum=sum+ar[0][k]+ar[x][k];
		}
		sum=sum-ar[0][0]-ar[0][y]-ar[x][0]-ar[x][y];
		printf("%d\n",sum);
		sum=0;
	}
	return 0;
}