int main(){
    int sz[100];
	int i,b,n;
	i=0;
    scanf("%d",&n);
	b=n-1;
	for(i=0;i<n;i++){
           scanf("%d",&sz[i]);
	}
	for(b=n-1;b>0;b--){
		printf("%d ",sz[b]);
	}
	    b=0;
		printf("%d",sz[b]);

	
	return 0;
}
     