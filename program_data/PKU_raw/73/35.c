int main()
{
	int num[5][5];
	int i,j;
	int max[5],min[5];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>num[i][j];
	for(i=0;i<5;i++)
	{
		max[i]=0;
		min[i]=0;
	}
	for(i=0;i<5;i++)
	{
		max[i]=num[i][0];
		for(j=0;j<5;j++)
		{
			if(num[i][j]>max[i])
				max[i]=num[i][j];
		}
	}
	for(j=0;j<5;j++)
	{
		min[j]=num[0][j];
		for(i=0;i<5;i++)
		{
			if(num[i][j]<min[j])
				min[j]=num[i][j];
		}
	}
	int test=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			if(max[i]==min[j]&&max[i]==num[i][j])
				{
					cout<<i+1<<" "<<j+1<<" "<<num[i][j]<<endl;
					test=1;
				}				
		}
	if(test==0)
		cout<<"not found"<<endl;
	return 0;
}