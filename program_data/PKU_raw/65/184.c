int main(){
    int n,i,j,sz[200][2],a,b;
	a=0;
	b=0;
	scanf("%d",&n);
    for(i=0;i<n;i++){
		for(j=0;j<1;j++){
		    scanf("%d ",&sz[i][j]);
		}
		scanf("%d",&sz[i][1]);
	}
    for(i=0;i<n;i++){
		if((sz[i][0]==0&&sz[i][1]==1)||(sz[i][0]==1&&sz[i][1]==2)||(sz[i][0]==2&&sz[i][1]==0)){
		   a+=1;
		}else if((sz[i][0]==1&&sz[i][1]==0)||(sz[i][0]==2&&sz[i][1]==1)||(sz[i][0]==0&&sz[i][1]==2)){
		   b+=1;
		}else{
		   a+=0;
		   b+=0;
		}
	}
	if(a<b){
		printf("B");
	}else  if(a==b){
	    printf("Tie");
	}else {
		printf("A");
	}
    return 0;
}




