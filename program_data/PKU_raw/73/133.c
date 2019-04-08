int main()
{
	int a[5][5];
	int temp;
	int hang_max[5],lie_min[5];
	int flag=1;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
		{
			cin>>a[i][j];
		}
	for(int i=0;i<5;i++)
	{
		hang_max[i]=a[i][0];
		for(int j=0;j<5;j++)
		{
			if(a[i][j] > hang_max[i])
			{
				hang_max[i]=a[i][j];
			}
		}
	}
	for(int j=0;j<5;j++)
	{
		lie_min[j]=a[0][j];
		for(int i=0;i<5;i++)
		{
			if( a[i][j] < lie_min[j] )
			{
				lie_min[j]=a[i][j];
			}
		}
	}
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
		{
			if( (a[i][j] == hang_max[i]) && (a[i][j] == lie_min[j]) )
			{
				cout<<i+1<<' '<<j+1<<' '<<a[i][j]<<endl;
				
				return 0;
			}
		}	
		cout<<"not found"<<endl;
			
    
	return 0;
}
