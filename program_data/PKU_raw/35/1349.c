int main()
{
	int m,n;
	scanf("%d,%d",&m,&n);
	int sz[8][8],h[8][8],l[8][8];
	int i,j,a,b,c=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			h[i][j]=sz[i][j];
			l[i][j]=sz[i][j];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n-1;j++){
			if(h[i][j]>h[i][j+1]){
				a=h[i][j];
				h[i][j]=h[i][j+1];
				h[i][j+1]=a;
			}
		}
	}
	for(j=0;j<n;j++){
		for(i=0;i<m-1;i++){
			if(l[i][j]<l[i+1][j]){
				b=l[i][j];
				l[i][j]=l[i+1][j];
				l[i+1][j]=b;
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if((sz[i][j]==h[i][n-1])&&(sz[i][j]==l[m-1][j])){
				printf("%d+%d",i,j);
			}
			else{c++;}
		}
	}
	if(c==m*n){
		printf("No");
	}
	return 0;
}


