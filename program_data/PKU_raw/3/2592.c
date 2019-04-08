int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[1000];
    int b[1000];
	int sz[1000][1000];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	int m=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sz[i][j]=a[i]+b[j];
			if(sz[i][j]==k){
				m=1;
			}
		}
	}
	if(m==1){
		printf("yes");
	}
	if(m==0){
		printf("no");
	}
	

	
    return 0;
}