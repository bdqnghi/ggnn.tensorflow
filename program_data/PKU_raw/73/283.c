
int main()
{
	int i=0,k=0,j=0,max=0,min=1000000,a[6][6]={0};
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{    
			
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
		a[i][5]=max;
		max=0;
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			
			if(a[j][i]<min)
			{
				min=a[j][i];
			}
			
		}
		a[5][i]=min;
		min=1000000;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]==a[i][5]&&a[i][j]==a[5][j])
			{	
				k=1;
				cout<<i+1<<" "<<j+1<<" "<<a[i][j]<<endl;
		    }
		}
	}
	if(k==0) cout<<"not found"<<endl;

	return 0;
}