int main()
{
	int n,i,j,t1,t2,t3,t4,s;
	int c[100][100];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
			scanf("%d",&c[i][j]);
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(c[i][j]==0){
				t1=i;
				t2=j;
				goto ask;
			}
		}
	}
ask :
	for(i=n;i>0;i--){
		for(j=n;j>0;j--){
			if(c[i][j]==0){
				t3=i;
				t4=j;
				goto que;
			}
		}
	}
que:
	s=(t4-t2-1)*(t3-t1-1);
	printf("%d",s);
	return 0;
}

