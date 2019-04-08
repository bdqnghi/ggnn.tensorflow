int main()
{
	int n;
	int a,b,c,d;
	int i,j;
	scanf("%d",&n);
	int sz[1000][1000];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d ",&(sz[i][j]));
		}
	}
    for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(sz[i][j]==0){
				a=i;
			    b=j;
			}
		}
	}
	for(i=n-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if(sz[i][j]==0){
				 c=i;
				 d=j;
			}
		}
	}
    int l=b-d-1;
	int w=a-c-1;
	int s=l*w;
	printf("%d",s);
	return 0;
}