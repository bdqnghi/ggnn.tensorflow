int main()
{
	int n,i,j,k,p=0,x[11][3],y[100][3],z[100][3];
	double d1[45]={0},d[45];
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<3;j++)
	{
		cin>>x[i][j];
	}
	for(i=0;i<n-1;i++)
		{   
			for(j=i+1;j<n;j++)
			{
				for(k=0;k<3;k++)
				{    
					d1[p]=d1[p]+((double)x[i][k]-(double)x[j][k])*((double)x[i][k]-(double)x[j][k]);
					y[p][k]=x[i][k];
				    z[p][k]=x[j][k];
				}
				
				d[p]=sqrt(d1[p]);
				p++;
	}
	}
	for(i=0;i<p-1;i++)
		{for(j=p-2;j>=i;j--)
	{if(d[j]<d[j+1]) {
		swap(d[j],d[j+1]);
		swap(y[j][0],y[j+1][0]);
		swap(y[j][1],y[j+1][1]);
		swap(y[j][2],y[j+1][2]);
		swap(z[j][0],z[j+1][0]);
		swap(z[j][1],z[j+1][1]);
		swap(z[j][2],z[j+1][2]);
	}}}
	for(i=0;i<p;i++)
	{cout<<"("<<y[i][0]<<","<<y[i][1]<<","<<y[i][2]<<")"<<"-"<<"("<<z[i][0]<<","<<z[i][1]<<","<<z[i][2]<<")"<<"="<<fixed<<setprecision(2)<<d[i]<<endl;}
	return 0;
}


