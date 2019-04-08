int main()
{
	int i=0,j=0,k=0;
	float num[300]={0};
	int n;
	float ave=0, sum=0;
	float temp=0;
	int temp_num;
	cin>>n;
	i=1;
	while(i<=n)
	{
		cin>>num[i];
		sum=sum+num[i];
		i++;
	}
	ave=sum/n;
	i=1;
	float distance =0;
	while(i<=n)
	{
		if((num[i]-ave)>=0)
			distance=num[i]-ave;
		else
			distance=ave-num[i];
		if(temp<(distance))
		{
			temp=distance;
		}
		i++;
	}
	//cout<<temp;
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			if(num[j]>num[j+1])
			{
				temp_num=num[j];
				num[j]=num[j+1];
				num[j+1]=temp_num;
			}
		}
	}
	i=1;
	int record=0;
	while(i<=n)
	{
		//cout<<num[i];
		//cout<<temp-(num[i]-ave)<<endl;
		if((num[i]-ave)>=0)
			distance=num[i]-ave;
		else
			distance=ave-num[i];
		if(temp-(distance)<=0.000001)
		{
			if(record==0)
			{
				cout<<num[i];
				record=record+1;
			}
			else
			{
				cout<<","<<num[i];
				
			}
		}
		i=i+1;
	}
	
}