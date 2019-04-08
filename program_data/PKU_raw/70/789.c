int main()
{   
	double n,x[100],y[100],distance[100][100],max=0;
	int i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
    for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
	{
        distance[i][j]=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
	}
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{if (distance[i][j]>max)
		max=distance[i][j];}
	cout<<max<<endl;
	return 0;

}