int main()
{
	int n[5][5],i,j,max[5],flag,count=0;
	for(i=0;i<5;i++)
	{
		cin>>n[i][0];
		max[i]=0;
		for(j=1;j<5;j++)
		{
			cin>>n[i][j];
			if(n[i][max[i]]<n[i][j])
				max[i]=j;
		}
	}
	for(i=0;i<5;i++)
	{
		flag=0;
		for(j=0;j<5;j++)
		{
			if(n[j][max[i]]<n[i][max[i]])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<i+1<<' '<<max[i]+1<<' '<<n[i][max[i]]<<endl;
			count++;
		}
	}
	if(count==0)
		cout<<"not found"<<endl;
	return 0;
}


