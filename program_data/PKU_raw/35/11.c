void main()
{
	int a[8][8],state[8][8];
	int m,n;
	scanf("%d,%d",&m,&n);

	int i,j;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			state[i][j]=1;
		}
	}

	int k;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			for (k=0;k<m;k++){
				if (a[k][j]<a[i][j]) state[i][j]=0;
			}
			for (k=0;k<n;k++){
				if (a[i][k]>a[i][j]) state[i][j]=0;
			}
		}
	}
	int count=0;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			if (state[i][j]==1){
				printf("%d+%d\n",i,j);
				count++;
			}
		}
	}
	if (count==0) printf("No");
}
