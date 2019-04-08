int main()
{
	int num[5][5],counter=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{cin>>num[i][j];}
		cout<<endl;
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			int mid=0,second=0;
			for(int k=0;k<5;k++)
			{
			   mid+=(num[i][j]>num[i][k]);
			}
			if(mid==4)
			{ 
			   for(int l=0;l<5;l++)
			{
					second+=(num[i][j]<num[l][j]);
			}
			if(second==4)
			{cout<<i+1<<" "<<j+1<<" "<<num[i][j]<<endl; 
			counter++;}
			}
		}
	}
	if(counter==0)
		cout<<"not found";
	return 0;
}