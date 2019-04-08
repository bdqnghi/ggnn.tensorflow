int main ()
{
	int n,i,k;
	int sz[N];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		if(i<n-1){
		printf("%d ",sz[n-i-1]);
     	} else if(i=n-1){
		printf("%d",sz[n-i-1]);
	   }
    }
    return 0;
}
