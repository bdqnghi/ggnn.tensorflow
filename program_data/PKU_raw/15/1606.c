int main()
{
	int sz[ROW][COL];
	int i,j,n,a=0,s1,s2,e1,e2,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&sz[i][j]);
			if(sz[i][j]==0&&a==0){
				s1=i;
				s2=j;
				a=1;
			}
			if(sz[i][j]==0){
				e1=i;
				e2=j;
			}
		}
	}
	sum=(e1-s1-1)*(e2-s2-1);
	printf("%d",sum);
	return 0;
}

