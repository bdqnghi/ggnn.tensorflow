int main()
{
	int m,n;
	int num[10][10];
	scanf("%d,%d",&m,&n);
	int i,j;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&num[i][j]);
		}
	}
	int f;
	int p,q;
	int g=-1;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++){
			f=-1;
			for(p=1;p<=n;p++)
			{
				if(num[i][p]>num[i][j]) f=1;
			}
			for(q=1;q<=m;q++)
			{
				if(num[q][j]<num[i][j]) f=1;
			}
			if(f==-1){
				printf("%d+%d",i-1,j-1);
				g=1;}
		}
	}
	if(g==-1) printf("No");
	return 0;
}

