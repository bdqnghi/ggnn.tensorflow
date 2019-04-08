int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int sz[9][9];
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			sz[i][j]=0;
		}
	}
	sz[4][4]=m;
	int a[100],row[100],col[100],v=0;
	for(int k=0;k<n;k++){
		for(int l=0;l<9;l++){
			for(int u=0;u<9;u++){
				if(sz[l][u]!=0){
					a[v]=sz[l][u];
					row[v]=l;
					col[v]=u;
					v++;
				}
			}
		}
			for(int w=0;w<9;w++){
				for(int m=0;m<9;m++){
					sz[w][m]=0;
				}
			}
		for(int c=0;c<v;c++){
			sz[row[c]+1][col[c]+1]+=a[c];
            sz[row[c]+1][col[c]]+=a[c];
            sz[row[c]][col[c]+1]+=a[c];
            sz[row[c]-1][col[c]-1]+=a[c];
            sz[row[c]-1][col[c]]+=a[c];
            sz[row[c]][col[c]-1]+=a[c];
            sz[row[c]+1][col[c]-1]+=a[c];
			sz[row[c]-1][col[c]+1]+=a[c];
			sz[row[c]][col[c]]+=2*a[c];
		}
			int a[100]={0};
			int row[100]={0};
			int col[100]={0};
			v=0;
	}
	for(int p=0;p<9;p++){
		for(int q=0;q<8;q++){
			printf("%d ",sz[p][q]);
		}
		printf("%d\n",sz[p][8]);
	}
	return 0;
}