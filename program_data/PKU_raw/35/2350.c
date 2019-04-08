int main(){
	int sz[100][100];
	int n,m;
	scanf("%d,%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	int max[1000];
	int min[1000];
	int h[1000]={0};
	int l[1000]={0};
	for(i=0;i<n;i++){
		max[i]=sz[i][0];
		for(j=0;j<m;j++){
			if(max[i]<sz[i][j]){
				max[i]=sz[i][j];
				h[i]=j;
			}
		}
	}
	for(j=0;j<m;j++){
		min[j]=1000;
		for(i=0;i<n;i++){
			if(min[j]>sz[i][j]){
				min[j]=sz[i][j];
				l[j]=i;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(max[i]==min[j]){
				printf("%d+%d",i,j);
				return 0;
			}
		}
	}
	printf("No");
	return 0;
}