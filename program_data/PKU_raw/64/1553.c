int main()
{
	float a[32]={0},c[12][12]={0};//???????????i?????j????????
	int i,j,m=0,n=0;
	cin>>n;
	for(i=1;i<=3*n;i++)
		cin>>a[i];
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			c[i][j]=sqrt((a[i*3-1]-a[j*3-1])*(a[i*3-1]-a[j*3-1])+(a[i*3-2]-a[j*3-2])*(a[i*3-2]-a[j*3-2])+(a[i*3]-a[j*3])*(a[i*3]-a[j*3]));//????
		}
	}
	int e,f,z=0,y,g;
	y=n*(n-1)/2;//????????
	for(g=y;g>=1;g--)//???????????
	{
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				z=0;
				for(e=1;e<n;e++)
				{
					for(f=e+1;f<=n;f++)
					{
						if(c[i][j]>=c[e][f])//????
							z=z+1;
					}
				}
				if(z==g)
				{
					cout<<"("<<a[i*3-2]<<","<<a[i*3-1]<<","<<a[i*3]<<")-("<<a[j*3-2]<<","<<a[j*3-1]<<","<<a[j*3]<<")=";
					printf("%0.2f", c[i][j]);
					cout<<endl;
				}
			}

		}
	}
		return 0;
}
