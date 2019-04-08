int main()
{
	int n, i, k, sz[100],max,max1;
	scanf("%d\n",&n);
	for(i=0;i<=n-1;i++){
	scanf("%d\n", &(sz[i]));
	}
	max=max1=sz[0];
		for(i=0; i<n; i++){
			if(sz[i]>max){
            max=sz[i];
			}
		}
		for(i=0; i<n; i++){
			if(sz[i]<max&&sz[i]>max1){
            max1=sz[i];
			}
		}
	printf("%d\n%d", max, max1);
	return 0;
}