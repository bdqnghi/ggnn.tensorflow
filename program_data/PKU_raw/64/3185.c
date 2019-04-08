int main()
{
	struct address
	{
		int x;
	    int y;
		int z;
	}point[10];
	int n,i,j,k;
	double d[45],t;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>point[i].x>>point[i].y>>point[i].z;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
			d[(2*n-1-i)*i/2+j-i-1]=sqrt((point[i].x-point[j].x)*(point[i].x-point[j].x)+(point[i].y-point[j].y)*(point[i].y-point[j].y)+(point[i].z-point[j].z)*(point[i].z-point[j].z));
	}
	for(i=0;i<n*(n-1)/2-1;i++)
	{
		for(j=i+1;j<n*(n-1)/2;j++)
		{
			if(d[j]>d[i])
			{t=d[i];d[i]=d[j];d[j]=t;}
		}
	}
	for(i=0;i<n*(n-1)/2;)
	{
		for(j=0;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(sqrt((point[k].x-point[j].x)*(point[k].x-point[j].x)+(point[k].y-point[j].y)*(point[k].y-point[j].y)+(point[k].z-point[j].z)*(point[k].z-point[j].z))==d[i])
                {cout<<"("<<point[j].x<<","<<point[j].y<<","<<point[j].z<<")-("<<point[k].x<<","<<point[k].y<<","<<point[k].z<<")=";
				 cout<<(fixed)<<setprecision(2)<<d[i]<<endl;}
			}
		}
		for(j=i+1;j<n*(n-1)/2;j++)
		{
			if(d[j]!=d[i]) break;
		}
		i=j;
	}
	return 0;
}


		


