int main(){
	int n,sz[300],i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			if (sz[i]==sz[k]&&i!=k&&sz[k]!=100000000){
				sz[k]=100000000;
			}
		}
	}
	printf("%d",sz[0]);		
	for(i=1;i<n;i++){
				if(sz[i]==100000000){
					continue;
				}
				
				printf(",%d",sz[i]);
			}
			
			return 0;
	}
