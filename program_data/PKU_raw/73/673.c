int main()
{
	int max=0,sign,a[5][5],i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>a[i][j];
		}
	}
	for(j=0;j<5;j++)
	{
		if(a[0][j]>max)
		{
			max=a[0][j];
			sign=j;
		}
	}
	for(i=0;i<5;i++)
	{
		if(a[i][sign]<max)
			break;
		if(i==4&&a[i][sign]>max)
		{
			cout<<"1"<<" "<<sign+1<<" "<<a[0][sign];
			return 0;
		}
	}
	max=0;
	for(j=0;j<5;j++)
	{
		if(a[1][j]>max)
		{
			max=a[1][j];
			sign=j;
		}
	}
	for(i=0;i<5;i++)
	{
		if(a[i][sign]<max)
			break;
		if(i==4&&a[i][sign]>max)
		{
			cout<<"2"<<" "<<sign+1<<" "<<a[1][sign];
			return 0;
		}
	}
	max=0;
	for(j=0;j<5;j++)
	{
		if(a[2][j]>max)
		{
			max=a[2][j];
			sign=j;
		}
	}
	for(i=0;i<5;i++)
	{
		if(a[i][sign]<max)
			break;
		if(i==4&&a[i][sign]>max)
		{
			cout<<"3"<<" "<<sign+1<<" "<<a[2][sign];
			return 0;
		}
	}
	max=0;
	for(j=0;j<5;j++)
	{
		if(a[3][j]>max)
		{
			max=a[3][j];
			sign=j;
		}
	}
	for(i=0;i<5;i++)
	{
		if(a[i][sign]<max)
			break;
		if(i==4&&a[i][sign]>max)
		{
			cout<<"4"<<" "<<sign+1<<" "<<a[3][sign];
			return 0;
		}
	}
	max=0;
	for(j=0;j<5;j++)
	{
		if(a[4][j]>max)
		{
			max=a[4][j];
			sign=j;
		}
	}
	for(i=0;i<5;i++)
	{
		if(a[i][sign]<max)
			break;
		if(i==4&&a[i][sign]>max)
		{
			cout<<"5"<<" "<<sign+1<<" "<<a[4][sign];
			return 0;
		}
	}
	cout<<"not found";
	return 0;
}