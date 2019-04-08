int main()
{
	int a1,a2,b1,b2;
	int i,j,n;
	scanf("%d",&n);
	int sz[1000][1000];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	int tag=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(sz[i][j]==0){
				a2=i;
				b2=j;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(sz[i][j]==0&&tag==0){
				a1=i;
				b1=j;
				tag=1;
			}
		}
	}
	int a,b;
	a=a2-a1-1;
	b=b2-b1-1;
	int s;
	s=a*b;
	printf("%d",s);
	return 0;
}
