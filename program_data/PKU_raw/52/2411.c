
int main(){
	int n,m,i;
	int sz[100],sh[100];

	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
		sh[i]=sz[i];
	}
	for(i=0;i<n;i++){
	    if(i<=n-m-1){
			sz[m+i]=sh[i];}
		else{
			sz[i-n+m]=sh[i];}
	}
	for(i=0;i<n-1;i++){
	printf("%d ",sz[i]);
	}
	printf("%d",sz[n-1]);
	return 0;
}


