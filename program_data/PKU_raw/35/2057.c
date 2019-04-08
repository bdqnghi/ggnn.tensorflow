int main()
{
	int n,m;
	scanf("%d,%d",&n,&m);
	int i,j,ar[8][8],a[8][8],b[8][8];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&ar[i][j]);
			a[i][j]=ar[i][j];
			b[i][j]=ar[i][j];
		}
	}
	int k,x;
	for(i=0;i<n;i++){
		for(k=1;k<m;k++){
			for(j=0;j<m-k;j++){
				if(b[i][j]<b[i][j+1]){
					x=b[i][j];
					b[i][j]=b[i][j+1];
					b[i][j+1]=x;
				}
			}
		}
	}
	for(j=0;j<m;j++){
		for(k=1;k<n;k++){
			for(i=0;i<n-k;i++){
				if(a[i][j]>a[i+1][j]){
					x=a[i][j];
					a[i][j]=a[i+1][j];
					a[i+1][j]=x;
				}
			}
		}
	}
	int tag=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if((ar[i][j]==a[0][j])&&(ar[i][j]==b[i][0])){
				printf("%d+%d",i,j);
				tag=1;
			}
		}
	}
	if(tag==0){
		printf("No");
	}
	return 0;
}