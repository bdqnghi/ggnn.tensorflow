int main()
{
	int sz1[5][5];
	int n,m,i,j;
	int sz(int sz1[5][5],int m,int n);
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&sz1[i][j]);
	scanf("%d%d",&m,&n);
	if(sz(sz1,m,n)==0)
	printf("error");
	return 0;
}
int sz(int sz1[5][5],int m,int n)
{
	int i,j,t,y;
	if(n<=4&&m<=4){
		y=1;
		for(i=0;i<5;i++){
			t=sz1[n][i];
			sz1[n][i]=sz1[m][i];
			sz1[m][i]=t;
		}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				printf("%d",sz1[i][j]);
				if(j<4)
					printf(" ");
			}
			if(i<4)
				printf("\n");
		}
	}
	else
		y=0;
	return(y);
}