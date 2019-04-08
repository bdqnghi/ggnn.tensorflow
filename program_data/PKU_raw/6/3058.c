int main(){
	int a[ROW][COL];
	int s=0;
	int m,n,k;
	scanf("%d",&k);

	for(int t=1;t<=k;t++){
	    scanf("%d %d",&m,&n);
		for(int q=0;q<m;q++){
			for(int p=0;p<n;p++){
                scanf("%d",&a[q][p]);
			}
		}
	    int col=0,row=0;
	    for(col;col<n;col++){
		    s=s+a[row][col];
		}
	    col=0;
	    for(row;row<m;row++){
		    s=s+a[row][col];
		}
		row=m-1;
		col=0;
	    for(col;col<n;col++){
		    s=s+a[row][col];
		}
	    col=n-1;
		row=0;
	    for(row;row<m;row++){
		    s=s+a[row][col];
		}
	    s=s-a[0][0]-a[m-1][n-1]-a[0][n-1]-a[m-1][0];
	    printf("%d\n",s);
		s=0;
	}
	return 0;
}