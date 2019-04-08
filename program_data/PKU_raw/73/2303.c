int main(){
	int sz[5][5],k,i,n,m;
	n=5;
	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
		scanf("%d",&sz[i][k]);
	}
	}
           m=1;
	for(k=0;k<n;k++){
		for(i=0;i<n;i++){
			if(sz[i][k]>=sz[i][0]&&sz[i][k]>=sz[i][1]&&sz[i][k]>=sz[i][2]&&sz[i][k]>=sz[i][3]&&sz[i][k]>=sz[i][4]){
				if(sz[i][k]<=sz[0][k]&&sz[i][k]<=sz[1][k]&&sz[i][k]<=sz[2][k]&&sz[i][k]<=sz[3][k]&&sz[i][k]<=sz[4][k]){
					printf("%d %d %d",(i+1),(k+1),sz[i][k]);
               m=0;
		}
	}
		}
	}
                 if(m){
                 printf("not found");   
} 
			return 0;
}
