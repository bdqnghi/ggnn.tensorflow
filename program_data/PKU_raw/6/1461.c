int main(){
	int k,m,n,i;
	int sz[100][100];
	int row,col;
	int add[100];

	scanf("%d",&k);
	
	for(i=0;i<k;i++){
		add[i]=0;
	}
    
	for(i=0;i<k;i++){
        scanf("%d%d",&m,&n);
	    for(row=0;row<m;row++){
		    for(col=0;col<n;col++){
		    	scanf("%d",&sz[row][col]);
			}
		}


	    for(col=0;col<n;col++){
		    add[i]+=sz[0][col];
		    add[i]+=sz[m-1][col];
		}



	    for(row=0;row<m;row++){
		    add[i]+=sz[row][0];
		    add[i]+=sz[row][n-1];
		}

	    add[i]-=sz[0][0];
 	    add[i]-=sz[m-1][0];
	    add[i]-=sz[0][n-1];
	    add[i]-=sz[m-1][n-1];

	}

	for(i=0;i<k;i++){
		printf("%d\n",add[i]);
	}

	return 0;
}