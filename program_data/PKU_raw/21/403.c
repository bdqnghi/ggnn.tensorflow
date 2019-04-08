int main()
{
	int num[301],change[301];
	int n=0,i=0,sum=0,count=0;
	double ave=0,max=0;
	memset(num,0,sizeof(num));
	memset(change,0,sizeof(change));
	cin>>n;
	for(i=0;i<n;i++)
		cin>>num[i];
	for(i=0;i<n;i++)
		sum=sum+num[i];
	ave=(double)sum/n;
	for(i=0;i<n;i++)
		if(fabs(num[i]-ave)>max)
			max=fabs(num[i]-ave);
	for(i=0;i<n;i++)
		if(fabs(fabs(num[i]-ave)-max)<0.00001)
		{
			change[count]=num[i];
			count++;
		}
	if(count==2)
	{
		if(change[1]>change[0])
			cout<<change[0]<<","<<change[1];
		else
			cout<<change[1]<<","<<change[0];
	}
	else
		cout<<change[0];
	return 0;
}