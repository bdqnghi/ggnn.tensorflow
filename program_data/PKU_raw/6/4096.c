int main() {
	int k,m,n;
	int i,j,t;
	int sum;
	int z;
	scanf("%d",&k);
	for(t=0;t<k;t++) {
		scanf("%d%d",&m,&n);
		sum=0;
		for(i=0;i<m;i++) {
			for(j=0;j<n;j++) {
				scanf("%d",&z);
				if(i==0 || i==m-1) sum+=z;
				else {
					if(j==0 || j==n-1) sum+=z;
				}
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}