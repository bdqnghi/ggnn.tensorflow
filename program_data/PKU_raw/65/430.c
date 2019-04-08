int main(){
	int n,sz[100][2],i,a,b;
	a=0;
	b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
        scanf("%d%d",&sz[i][0],&sz[i][1]);
	}
	for(i=0;i<n;i++){
		if(sz[i][0]==sz[i][1]){
			a=a+1;
			b=b+1;
		}else if(sz[i][0]-sz[i][1]==-1||sz[i][0]-sz[i][1]==2){
			a=a+1;
		}else{
			b=b+1;
		}
	}
	if(a==b){
		printf("Tie");
	}else if(a>b){
		printf("A");            
	}else if(a<b){
		printf("B");
	}
	return 0;
}
