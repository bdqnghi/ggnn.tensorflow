//????
int main()
{
	double a[11],b[11],c[11];
	int n,i,j,k,p,q;
	double max,dis[10][11];
	cin>>n;
	for (i=1;i<=n;i++)//??
	{
		cin>>a[i]>>b[i]>>c[i];
	}
	for (i=1;i<n;i++)//??
	{
		for (j=i+1;j<=n;j++)
		{
			dis[i][j]=(double)pow((double)pow(a[i]-a[j],2)+(double)pow(b[i]-b[j],2)+(double)pow(c[i]-c[j],2),0.5);
			if (dis[i][j]<0)
			{
				dis[i][j]=-dis[i][j];
			}
		}
	}
	for (k=1;k<=n*(n-1)/2;k++)//?????????
	{
		max=dis[1][2];
		p=1;
		q=2;
		for (i=1;i<n;i++)
		{
			for (j=i+1;j<=n;j++)
			{
				if (dis[i][j]>max)
				{
					max=dis[i][j];
					p=i;
					q=j;
				}
			}
		}
		cout<<'('<<(int)a[p]<<','<<(int)b[p]<<','<<(int)c[p]<<')'<<'-'<<'('<<(int)a[q]<<','<<(int)b[q]<<','<<(int)c[q]<<')'<<'='<<fixed<<setprecision(2)<<dis[p][q]<<endl;
		dis[p][q]=0;
	}
	return 0;
}