int main()
{
	struct 
	{
		float first; float second;float distance;
	}b[100],temp;
	float a[11][3];
	int p,q,n,k=0,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
			cin>>a[i][j];

	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			b[k].first=i;
			b[k].second=j;
			b[k].distance=sqrt(fabs(pow((a[i][0]-a[j][0]),2)+pow((a[i][1]-a[j][1]),2)+pow((a[i][2]-a[j][2]),2)));
			k++;
		}
	}
	for(i=0;i<n*(n-1)/2-1;i++)
	{
		for(j=n*(n-1)/2-1;j>i;j--)
		{
			if(b[j].distance>b[j-1].distance)
			{
				temp=b[j];b[j]=b[j-1];b[j-1]=temp;
			}
		}
	}
	for(i=0;i<n*(n-1)/2;i++)
	{
		p=b[i].first;
		q=b[i].second;
		cout<<"("<<a[p][0]<<","<<a[p][1]<<","<<a[p][2]<<")-("<<a[q][0]<<","<<a[q][1]<<","<<a[q][2]<<")="<<fixed<<setprecision(2)<<b[i].distance<<fixed<<setprecision(0)<<endl;
	}
	return 0;
}




	



	

