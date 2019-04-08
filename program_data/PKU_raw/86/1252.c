int main()
{
	int n,bad[10],badnum[10],i,j,k,time,goodnum[10];
	cin >>n;
	for (j=0;j<n;j++)
	{
		cin >>bad[j];
		if (bad[j]==0)
			goodnum[j]=60;
		for (i=0;i<bad[j];i++)
		{
			cin >>badnum[i];
		}
		for (i=0;i<bad[j];i++)
		{
			time=badnum[i]+3*(i+1);
			if (time>=60 && badnum[i]+3*i<60)
			{
				goodnum[j]=badnum[i];
				break;
			
			}
			if (badnum[i]+3*i>=60)
			{
				goodnum[j]=60-3*i;
				break;
			}
			else if (i==bad[j]-1)
				goodnum[j]=60-3*(i+1);

		}
		
	}

	for (j=0;j<n;j++)
	{	
		cout <<goodnum[j]<<endl;
	}
	return 0;
}


