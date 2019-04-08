int main(){
	int n,i,e;
	scanf("%d",&n);
	int sz[101];
	i=0;e=n-1;
	while(i<n){
		scanf("%d",&sz[i]);
		i++;
	}
	while(e>0&&e<n){
		printf("%d ",sz[e]);
		e--;	
}
printf("%d",sz[e]);

	return 0;
}
