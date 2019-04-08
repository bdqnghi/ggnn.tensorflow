int main(){
	int n,sz[600],szo[600],k=0,a; 
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&(sz[i]));
	} 
	for(int j=0;j<n;j++){ 
		if(sz[j]%2!=0){ 
			szo[k]=sz[j]; k++; 
		} 
	} 
	for(int p=1;p<k-1;p++){ 
		for(int o=0;o<k-p;o++){ 
			if(szo[o]>szo[o+1]){
				a=szo[o+1]; szo[o+1]=szo[o]; szo[o]=a; 
			}
		}
	} 
	for(int q=0;q<k;q++){
		if(q==k-1){ printf("%d",szo[q]);
		} else { 
			printf("%d,",szo[q]);
		} 
	}
	return 0;
} 