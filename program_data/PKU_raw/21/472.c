int main()
{
	int num[300],n,i,j=0,m=0;//num???????n??????,sum????
	double dis[300],ave,max,sum=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(i=0;i<n;i++)//??
	{sum=sum+num[i];}
	ave=sum/n;//????
	for(i=0;i<n;i++)//????
	{
		if(num[i]>=ave) dis[i]=num[i]-ave;
		else dis[i]=ave-num[i];
	}
	max=dis[0];
	for(i=0;i<n;i++)//????
	{
		if(dis[i]>max)  max=dis[i];
	}
	for(i=0;i<n;i++)//??????
	{
		if(dis[i]==max)  j++;
	}
	for(i=0;i<n;i++)//?????
	{
		if(dis[i]==max)  {cout<<num[i];m++;if(m!=j)  cout<<",";}
		
	}
	cout<<endl;
	return 0;
}