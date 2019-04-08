int swap(int n,int m,int sz[][5])
{
	int t1,t2,t3,t4,t5;
	if(n<=4&&n>=0&&m>=0&&m<=4)
	{
		t1=sz[n][0];
		t2=sz[n][1];
		t3=sz[n][2];
		t4=sz[n][3];
		t5=sz[n][4];
		sz[n][0]=sz[m][0];
		sz[n][1]=sz[m][1];
		sz[n][2]=sz[m][2];
		sz[n][3]=sz[m][3];
		sz[n][4]=sz[m][4];
		sz[m][0]=t1;
		sz[m][1]=t2;
		sz[m][2]=t3;
		sz[m][3]=t4;
		sz[m][4]=t5;
		return 1;
	}
	else
		return 0;
}
void main()
{
	int sz[5][5],n,m,i,p,q,j,a;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	a=swap(n,m,sz);
	
	if (a==1)
	{
		for(q=0;q<5;q++)
		{
			for(p=0;p<4;p++)
				printf("%d ",sz[q][p]);
			if(p==4)
				printf("%d\n",sz[q][p]);
		}
	}
	if (a==0)
		printf("error");
}

