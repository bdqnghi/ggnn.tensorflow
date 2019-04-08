int main()
{
	int k[5][5],m[5]={0};
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>k[i][j];
			if(k[i][j]>k[i][m[i]])
			{
				m[i]=j;
			}
		}
	}
	int flag=0,mark=0;
	for(i=0;i<5;i++)
	{
		flag=0;
		for(j=0;j<5;j++)
		{
			if(k[i][m[i]]<=k[j][m[i]])
				;
			else
				flag=1;
		}
		if(flag==0)
		{
			mark=1;
			cout<<i+1<<' '<<m[i]+1<<' '<<k[i][m[i]]<<endl;
		}
	}
	if(mark==0)
	{
		cout<<"not found"<<endl;
	}
	return 0;
}