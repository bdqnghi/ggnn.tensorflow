int main()
{
	int sz[100][6];
	int i,j,a=0,b;
	int h,m,s,sum,c[100];
	for(i=0;i<100;i++)
	{
		for(j=0;j<6;j++)
		{
			scanf("%d",&sz[i][j]);
	         if(sz[i][0]==0&&sz[i][1]==0&&sz[i][2]==0&&sz[i][3]==0&&sz[i][4]==0&&sz[i][5]==0)
				 b=0;
		}
		a++;
		if(b==0)
			break;
	}
	for(i=0;i<a-1;i++)
	{
			h=sz[i][3]+12-sz[i][0];
			m=sz[i][4]-sz[i][1];
			s=sz[i][5]-sz[i][2];
			sum=h*3600+m*60+s;
			c[i]=sum;
	}
	printf("%d",c[0]);
	for(i=1;i<a-1;i++)
	{
		printf("\n%d",c[i]);
	}
	return 0;
}