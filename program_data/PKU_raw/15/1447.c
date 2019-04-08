int main()
{
	int i,j,n,a,b,c,d,sz[1000][1000],s;
	scanf("%d",&n);     
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(sz[i][j]==0&&sz[i][j+1]==0&&sz[i+1][j]==0){
				a=i;
				b=j;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(sz[i][j]==0&&sz[i][j-1]==0&&sz[i-1][j]==0){
				c=i;
				d=j;
			}
		}
	}
	s=(c-a-1)*(d-b-1);
	printf("%d",s);
	return 0;
}
