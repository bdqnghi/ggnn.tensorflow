int main(){
	int m,n,i,j,a[100][100],b,c,d,e,k;
	scanf("%d%d",&m,&n);
	for(i=0;i<m+2;i++){
		a[i][0]=0;
		a[i][n+1]=0;
	
	}
	for(j=0;j<n+2;j++){
		a[0][j]=0;
		a[m+1][j]=0;
	}
    for(i=1;i<m+1;i++){
		for(j=1;j<n+1;j++){
			scanf("%d",&a[i][j]);
		}
	}

    
    for(i=1;i<m+1;i++){
		for(j=1;j<n+1;j++){
			b=a[i+1][j]-a[i][j];
			c=a[i-1][j]-a[i][j];
			d=a[i][j+1]-a[i][j];
			e=a[i][j-1]-a[i][j];
			if(b<=0&&c<=0&&d<=0&&e<=0) {
				printf("%d %d\n",i-1,j-1);
			}
		}
	}
	return 0;
}