
int c[5][5];

int change(int n,int m,int a[][5])
{
	int b[5],i,j,s;
	if(m<=4&&n<=4){
		for(i=0;i<5;i++){
			b[i]=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=b[i];
		}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++)
				c[i][j]=a[i][j];
		}
		s=1;
	}
	else
		s=0;
	return s;
}

main()
{
	int a[5][5],i,j,n,m;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}
	scanf("%d %d",&n,&m);
	if(change(n,m,a)==1){
		for(i=0;i<5;i++){
			for(j=0;j<4;j++)
				printf("%d ",c[i][j]);
			printf("%d\n",c[i][4]);
		}
	}
	else
		printf("error\n");
}