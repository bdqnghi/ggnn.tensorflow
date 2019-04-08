int main()
{
	int n,j=0,b;
    int a[15][3];
	double s[10000];
	int x[10000][2];
	double p;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1]>>a[i][2];
	}
	for(int k=0;k<n-1;k++)
	{
	for(int m=k+1;m<n;m++)
	{
		s[j]=sqrt((a[k][0]-a[m][0])*(a[k][0]-a[m][0])+(a[k][1]-a[m][1])*(a[k][1]-a[m][1])+(a[k][2]-a[m][2])*(a[k][2]-a[m][2]));
		x[j][0]=k;
		x[j][1]=m;
				j++;
	}
	}
	for(int z=0;z<j-1;z++)
	{
		for(int d=0;d<j-1-z;d++)
		{
			if(s[d]<s[d+1])
			{
				p=s[d+1];
				s[d+1]=s[d];
				s[d]=p;
				b=x[d+1][0];
				x[d+1][0]=x[d][0];
				x[d][0]=b;
				b=x[d+1][1];
				x[d+1][1]=x[d][1];
				x[d][1]=b;
			}
		}
	}
	for(int g=0;g<j;g++)
	{
	cout<<"("<<a[x[g][0]][0]<<","<<a[x[g][0]][1]<<","<<a[x[g][0]][2]<<")"<<"-"<<"("<<a[x[g][1]][0]<<","<<a[x[g][1]][1]<<","<<a[x[g][1]][2]<<")"<<"="<<fixed<<setprecision(2)<<s[g]<<endl;
	}
	return 0;
}

