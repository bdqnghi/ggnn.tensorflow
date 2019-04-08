int main()
{
	int array[5][5],min[5],max[5],imax[5],imin[5];
	int i,j;
	char flag=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>array[i][j];
	for(i=0;i<5;i++)
	{
		imax[i]=array[i][0];
		max[i]=0;
		for(j=1;j<5;j++)
			if(array[i][j]>imax[i])
			{
				imax[i]=array[i][j];
				max[i]=j;
			}
	}
	for(j=0;j<5;j++)
	{
		imin[j]=array[0][j];
		min[j]=0;
		for(i=1;i<5;i++)
			if(array[i][j]<imin[j])
			{
				imin[j]=array[i][j];
				min[j]=i;
			}
	}
	for(i=0;i<5;i++)
		if(min[max[i]]==i)
		{
			cout<<i+1<<' '<<max[i]+1<<' '<<imax[i]<<endl;
			flag=1;
		}
	if(flag==0)
		cout<<"not found"<<endl;
	return 0;
}