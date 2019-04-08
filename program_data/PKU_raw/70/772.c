double dis(double a,double b,double c,double d)
{
	return (sqrt((a-c)*(a-c)+(b-d)*(b-d)));
}
int main()
{
	double a[100][2];
	double temp1,n;
	int i,j;
	cin>>n;
	temp1=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
            if(temp1<dis(a[i][0],a[i][1],a[j][0],a[j][1]))
				temp1=dis(a[i][0],a[i][1],a[j][0],a[j][1]);
		}
	}
	cout<<temp1<<endl;
	return 0;
}