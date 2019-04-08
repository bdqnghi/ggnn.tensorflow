int main()
{
	int a,b,c,j;
	int sz[100][6];
	int i=0;
	while(1){
		for(j=0;j<6;j++)
		{
			scanf("%d",&sz[i][j]);
		}
		if(sz[i][0]==0&&sz[i][1]==0&&sz[i][2]==0&&sz[i][3]==0&&sz[i][4]==0&&sz[i][5]==0)
		{
			break;
		}
		i++;
	}
	a=i;
	int *s=(int*)malloc(sizeof(int)*a);
	int m=0;
	for(i=0;i<a;i++)
	{
		if((sz[i][0]>=1)&&(sz[i][0]<=11)&&(sz[i][3]>=1)&&(sz[i][3]<=11)&&(sz[i][1]>=0)&&(sz[i][1]<=59)&&(sz[i][2]>=0)&&(sz[i][2]<=59)&&(sz[i][4]>=0)&&(sz[i][4]<=59)&&(sz[i][5]>=0)&&(sz[i][5]<=59))
		{
			b=sz[i][0]*3600+sz[i][1]*60+sz[i][2];
			c=(sz[i][3]+12)*3600+(sz[i][4])*60+sz[i][5];
			s[i]=c-b;
			m++;
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%d\n",s[i]);
	}
	return 0;
}