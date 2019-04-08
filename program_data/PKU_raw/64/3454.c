
int main()
{
	int n,i,j,k;
	int a[11][3];
	float d[10][10]={0},h=0.0;
	float max=0.0;
	cin>>n;
	for (i=0;i<n;i++)
		cin>>a[i][0]>>a[i][1]>>a[i][2];
	for (i=0;i<n;i++)
		for (j=i+1;j<n;j++)
		{
			h=(a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2]);
			d[i][j]=sqrt(h);
		}
	for (k=0;k<n*(n-1)/2;k++)
	{
	    for (i=0;i<n;i++)
		    for (j=i+1;j<n;j++)
		        if (d[i][j]>max)
				    max=d[i][j];
		for (i=0;i<n;i++)
		    for (j=i+1;j<n;j++)
		        if (d[i][j]==max)
				{
					cout<<"("<<a[i][0]<<","<<a[i][1]<<","<<a[i][2]<<")-("
					<<a[j][0]<<","<<a[j][1]<<","<<a[j][2]<<")="
					<<fixed<<setprecision(2)<<d[i][j]<<endl;
					d[i][j]=-1;
				}
		max=0.0;
	}
	return 0;
}