int main()
{
	int i,j,a[5][5];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
	int max,count=0,maxj;
	for(i=0;i<5;i++)
	{
		int flag=1;
		max=a[i][0];
		maxj=0;                //?????????
		for(j=1;j<5;j++)
			if(a[i][j]>max)
			{
				max=a[i][j];
				maxj=j;
			}
			for(j=0;j<5;j++)
				if(a[j][maxj]<max)
				{
					flag=0;
					break;
				}
				if(flag==1)
				{
					count++;
					cout<<i+1<<' '<<maxj+1<<' '<<a[i][maxj]<<endl;
					break;
				}
	}
	if(count==0)
		cout<<"not found"<<endl;
	return 0;
}
