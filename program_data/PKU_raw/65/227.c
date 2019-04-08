int main(){
    int n,i,j,w=0,l=0;
    scanf("%d\n",&n);
    int sz[n][2];
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
           scanf("%d",&sz[i][j]);
        }
    }
    for(i=0;i<n;i++){
            if((sz[i][0]==0&&sz[i][1]==0)||(sz[i][0]==1&&sz[i][1]==1)||(sz[i][0]==2&&sz[i][1]==2)){
				w=w;
				l=l;
			    
			}
			else if((sz[i][0]==0&&sz[i][1]==1)||(sz[i][0]==1&&sz[i][1]==2)||(sz[i][0]==2&&sz[i][1]==0)){
				w=w+1;
				l=l;
			    
			}
			else if((sz[i][0]==0&&sz[i][1]==2)||(sz[i][0]==1&&sz[i][1]==0)||(sz[i][0]==2&&sz[i][1]==1)){
				w=w;
				l=l+1;
			    
             }
			
		
	}
	if(w>l){
		printf("A");
	}
	else if(w<l){
		printf("B");
	}
	else if(w==l){
		printf("Tie");
	}
	return 0;
}