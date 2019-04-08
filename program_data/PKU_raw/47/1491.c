int main (){
	int a,b,c,n,i,sz[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&(sz[i]));
	}
	for(i=n-1;i>0;i--){
		printf("%d ",sz[i]);
	}
	if(i==0){
		printf("%d",sz[i]);
	}
        return 0;
}