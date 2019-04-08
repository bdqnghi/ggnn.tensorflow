int main()
{
	int n,i,j;
	double dis=0,x[100],y[100],temp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			temp=sqrt(pow(x[i]-x[j],2.0)+pow(y[i]-y[j],2.0));
			if(temp>dis)
			{
				dis=temp;
			}
		}
	}
    printf("%.4f\n", dis);
	return 0;
}