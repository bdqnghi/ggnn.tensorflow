int main(){
	int sz[500];
	int i,n,k,e;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);}
	for(k=1;k<n;k++){
	for(i=0;i<n-k;i++){
		if(sz[i]>sz[i+1]){
		e=sz[i];
			
		sz[i]=sz[i+1];
		sz[i+1]=e;}}
	}
	
		
		for(i=0;i<n;i++){
			if(sz[i]%2!=0){
				printf("%d",sz[i]);
				break;}}
		for(i++;i<n;i++){
			if(sz[i]%2!=0){
				printf(",%d",sz[i]);}}
return 0;
}