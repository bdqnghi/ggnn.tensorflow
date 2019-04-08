int main()
{
	int i,j,n[6][6],t,num=0;
	for(i=0;i<6;i++)
		for(j=0;j<6;j++)
			n[i][j]=0;//???
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>n[i][j];//??
	for(i=0;i<5;i++)
	{
		t=n[i][0];
		for(j=0;j<5;j++)
		{
			if(n[i][j]>t)
			{
				n[i][5]=j;
				t=n[i][j];
			}
		}
	}
	for(j=0;j<5;j++)
	{
		t=n[0][j];
		for(i=0;i<5;i++)
		{
			if(n[i][j]<t)
			{
				n[5][j]=i;
			    t=n[i][j];
			}
		}
	}//n[5][j],n[i][5]???????????????????
	for(i=0;i<5;i++)
	{
		if(n[5][n[i][5]]==i)
		{
			if(num!=0)
			{
				cout<<' '<<i+1<<' '<<n[i][5]+1<<' '<<n[i][n[i][5]]<<endl;
				num++;
			}
			else
			{
				cout<<i+1<<' '<<n[i][5]+1<<' '<<n[i][n[i][5]]<<endl;
				num++;
			}
		}
	}
	if(num==0)
		cout<<"not found";
	return 0;
}
