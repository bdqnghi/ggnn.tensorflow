int main(){
	int n;
	int sz[500];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	int e;
	for(int z=1;z<=n;z++){
		for(int s=0;s<n-z;s++){
			
			 if(sz[s] > sz[s+1]){
				e = sz[s+1];
				sz[s+1] = sz[s];
				sz[s] = e;
		}
			
	}
   
}
	int a;
	for(int f=0;f<=n-1;f++){
	if(sz[f]%2!=0){
		a=sz[f];
	}
	}
  for(int d=0;d<=n-1;d++){

		if(sz[d]<a&&sz[d]%2!=0){
    printf("%d,",sz[d]);
	}

}

	printf("%d",a);
	

	return 0;
}