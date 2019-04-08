int main()
{
	int n,s[1000][1000],i,j,S;
	int a[2],b[2];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		    scanf("%d",&s[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(s[i][j]==0&&s[i+1][j]==0&&s[i][j+1]==0){
				a[0]=i;
				b[0]=j;
			}
			if(s[i][j]==0&&s[i-1][j]==0&&s[i][j-1]==0){
				a[1]=i;
				b[1]=j;
			}
		}
	}
	S=(a[1]-a[0]-1)*(b[1]-b[0]-1);
	printf("%d",S);
	return 0;
}