
void main()
{
	int i,j,k,n;
	int point[10][3];
	double dis[10][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %d %d",&point[i][0],&point[i][1],&point[i][2]);
//	for(i=0;i<n;i++)
//		printf("%d %d %d\n",point[i][0],point[i][1],point[i][2]);

	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			dis[i][j]=(point[i][0]-point[j][0])*(point[i][0]-point[j][0])+(point[i][1]-point[j][1])*(point[i][1]-point[j][1])+(point[i][2]-point[j][2])*(point[i][2]-point[j][2]);
	for(k=n*(n-1)/2;k>0;k--)
	{
		double max=0;
		int s,t;
		for (i=0;i<n-1;i++)
			for(j=i+1;j<n;j++)
				if(dis[i][j]>max)
				{
					max=dis[i][j];
					s=i;
					t=j;
				}
		max=sqrt(max);
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",point[s][0],point[s][1],point[s][2],point[t][0],point[t][1],point[t][2],max);
		dis[s][t]=0;
	}
}
