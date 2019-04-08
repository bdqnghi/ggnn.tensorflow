const double MIN=0.000001;
int main()
{
	int n,number[301],result[301];
	int i,j,t;
	double sum=0,average;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>number[i];
		sum+=number[i];
	}
	average=sum/n;
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (number[i]>number[j])
			{
				t=number[i];
				number[i]=number[j];
				number[j]=t;
			}
		}
	}
	result[0]=-1;
	double x,y=-1;
	for (i=0;i<n;i++)
	{
		x=number[i]-average;
		if (x<0)
			x=-x;
		if (y<x)
			y=x;
	}
	//cout<<average<<endl<<y<<endl;
	t=0;
	for (i=0;i<n;i++)
	{
		if ((number[i]-average-y<MIN && number[i]-average-y>-MIN) || (number[i]-average+y<MIN && number[i]-average+y>-MIN))
		{
			if (number[i]!=result[t])
				result[t++]=number[i];
		}
	}

	for (i=0;i<t;i++)
	{
		cout<<result[i];
		if (i<t-1)
			cout<<",";
	}
	return 0;
}