

int main()
{
    int n,i,j,r,t;
	float x[10],y[10],z[10],d[10][10]={-1},max;
	cin>>n;
	for (i=0;i<n;i++)
		cin>>x[i]>>y[i]>>z[i];
	for (i=0;i<n;i++)
		for (j=i+1;j<n;j++)
			 d[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
	for (int k=0;k<(n*(n-1)/2);k++)
	{
	    max=0;
		for (i=0;i<n;i++)
		    for (j=i+1;j<n;j++)
				if (d[i][j]>max)
					{
						max=d[i][j];
						r=i;
						t=j;
				    }
        d[r][t]=-1;
		cout<<'('<<x[r]<<','<<y[r]<<','<<z[r]<<")-("<<x[t]<<','<<y[t]<<','<<z[t]<<")=";
		printf("%.2f\n",max);
	}
return 0;
}