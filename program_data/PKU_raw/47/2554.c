int main() {
    int n,i,j,sz[100],chance[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&sz[i]);
	for(j=0;j<n-1;j++){
		chance[j]=sz[i-1];
		printf("%d ",chance[j]);
		i--;
	}
	j+=1;
	chance[j]=sz[i-1];
	printf("%d",chance[j]);
	return 0;
}
