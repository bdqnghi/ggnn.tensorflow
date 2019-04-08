int main(){ 
    int n,e,q;
    int sz[50000][2];
    scanf("%d",&n);

    for(int row=0;row<n;row++){
		for(int col=0;col<2;col++){
            scanf("%d",&sz[row][col]);
		}
	}
    for(int m=n;m>0;m--){
		for(int i=0;i<=m-2;i++){
			if(sz[i][0]>sz[i+1][0]){
				e=sz[i+1][0];
				sz[i+1][0]=sz[i][0];
				sz[i][0]=e;
				e=sz[i+1][1];
				sz[i+1][1]=sz[i][1];
				sz[i][1]=e;
			}
		}
	}
	

    for(int m=1;m<n;m++){
		for(int i=0;i<=m;i++){
			if(i!=m&&sz[m][0]<=sz[i][1]){
				break;
			}
			if(i==m){
				printf("no");
			
				return 0;
			}
		}
	}	
	q=0;
		for(int i=0;i<n;i++){
			if(sz[i][1]>q){
				q=sz[i][1];				
			}
		}
    printf("%d %d",sz[0][0],q);

        return 0; 
  } 
