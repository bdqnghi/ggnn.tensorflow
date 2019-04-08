int main(){
	int n,i,k,r,sz[100000];
	scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
		}
	scanf("%d",&k);
	for(i=0;i<n;i++){
		if(sz[i]==k){
			
			for(r=i;r<n;r++){
				sz[r]=sz[r+1];
				}
			i--;
			n--;
			}
		}
	
		
		
	for(i=0;i<n;i++){
		if(i==n-1){
			printf("%d",sz[i]);
			}
		else
		printf("%d ",sz[i]);
		}
	
	return 0;
	
	}
