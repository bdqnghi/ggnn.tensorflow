int n[100][3];
int main()
{
	int m,i,j,t,y[100][2]={0},l=0;
	double k[30][30]={0},max=0,x[30][30]={0};
	cin>>m;
	for(i=0;i<m;i++)
	{
		for(j=0;j<3;j++)
			cin>>n[i][j];
	}
	for(i=0;i<m;i++)
	{
		for(j=m-1;j>i;j--)
		{
			for(t=0;t<3;t++)
			{
				k[i][j]+=(n[i][t]-n[j][t])*(n[i][t]-n[j][t]);
			}
			k[i][j]=sqrt(k[i][j]);
			x[i][j]=k[i][j];
		}
	}
	for(t=1;t<m;t++)
	{
		l=l+t;
	}
	for(t=0;t<l;t++)
	{
		max=0;
		for(i=0;i<m;i++)
		{
			for(j=i+1;j<m;j++)
			{
				if(x[i][j]>max)
				{
					max=x[i][j];
					y[t][0]=i;
					y[t][1]=j;
				}
			}
		}
		x[y[t][0]][y[t][1]]=0;
	}
	for(t=0;t<l;t++)
	{
		cout<<'('<<n[y[t][0]][0]<<','<<n[y[t][0]][1]<<','<<n[y[t][0]][2]<<')'<<'-'<<'('<<n[y[t][1]][0]<<','<<n[y[t][1]][1]<<','<<n[y[t][1]][2]<<')'<<'='<<fixed<<setprecision(2)<<k[y[t][0]][y[t][1]]<<endl;
	}
	char dd;
	cin>>dd;
	return 0;
}




			
