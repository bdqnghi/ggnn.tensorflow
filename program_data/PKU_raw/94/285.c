int main(){
	int s,i,sz[100],n,e,z,k,l;
	scanf("%d",&n);
    for(l=0;l<n;l++){
	   scanf("%d",&sz[l]);
      if(sz[l]%2==0){
		   sz[l]=0;
	}}
	
	for(s=1;s<=n;s++){
	  for( i = 0; i < n - s; i++){
		  if(sz[i] > sz[i+1]){
					e = sz[i+1];
					sz[i+1] = sz[i];
					sz[i] = e;
			}
	}}
     for(z=0;z<n-1;z++){
		 if(sz[z]!=0){
		 printf("%d,",sz[z]);
	 }}printf("%d",sz[n-1]);
     return 0;
	}