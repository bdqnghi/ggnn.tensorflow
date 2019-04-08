
int main()
{
	int n,i,j,k;
	double x,y,z;
	int a[10][3]={0};;
	double b[45]={0};
	int c[45]={0},d[45]={0};
	cin>> n;
	for(i=0;i<n;i++)
	{
		cin>> a[i][0] >> a[i][1] >> a[i][2];
	}
	k=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			x=y=z=0;
			x=(a[i][0]-a[j][0])*(a[i][0]-a[j][0]);
			y=(a[i][1]-a[j][1])*(a[i][1]-a[j][1]);
			z=(a[i][2]-a[j][2])*(a[i][2]-a[j][2]);
			b[k]=sqrt(x+y+z);c[k]=i;d[k]=j;
			k++;
		}
	}
	for(i=0;i<n*(n-1)/2-1;i++)
	{
		for(j=0;j<n*(n-1)/2-i-1;j++)
		{
			if(b[j]<b[j+1])
				{
					x=b[j];b[j]=b[j+1];b[j+1]=x;
			        k=c[j];c[j]=c[j+1];c[j+1]=k;
				    k=d[j];d[j]=d[j+1];d[j+1]=k;
			}
		}
	}
	for(i=0;i<n*(n-1)/2;i++)
	{
		cout<<"("<<a[c[i]][0]<<","<<a[c[i]][1]<<","<<a[c[i]][2]<<")-("<<a[d[i]][0]<<","<<a[d[i]][1]<<","<<a[d[i]][2]<<")=";
		printf("%.2f",b[i]);cout<<endl;
	}
	return 0;
}

