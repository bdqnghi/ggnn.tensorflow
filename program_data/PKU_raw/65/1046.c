int main(){
	int sz[200][2];
	int n,i,j,a,b;
	a=0;
	b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&sz[i][0]);
	scanf("%d",&sz[i][1]);	
	}
    for(j=0;j<n;j++){
     if(sz[j][0]==0){
			if(sz[j][1]==1){
			a++;
			}else if(sz[j][1]==2){
			b++;
			}
		}else if(sz[j][0]==1){
			if(sz[j][1]==2){
			a++;
			}else if(sz[j][1]==0){
			b++;
			}
		}else if(sz[j][0]==2){
			if(sz[j][1]==0){
			a++;
			}else if(sz[j][1]==1){
			b++;
			}
		}
	
	}
	if(a>b){
	printf("A");
	}else if(a<b){
	printf("B");
	}else{
	printf("Tie");
	}

return 0;
}