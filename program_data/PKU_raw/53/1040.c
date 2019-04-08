
int main(){

	int n,i,m;
	int sz[300];

	scanf("%d",&n);

	for(i=0;i<n;i++){

		scanf("%d",&sz[i]);
	    
		if(i==0){

			printf("%d",sz[i]);
		}else{
            m=0;
			for(int k=0;k<i;k++){
				if(sz[i]==sz[k]){
					m=1;
				}
			}
			if(m==0){
				printf(",%d",sz[i]);
			}
		}
	}

	return 0;
}

