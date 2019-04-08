int main()
{
	int a[5][5];
	int i,j,k,t,m;
	m=0;
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
			if(a[i][j]>=a[i][0]&&a[i][j]>=a[i][1]&&a[i][j]>=a[i][2]&&a[i][j]>=a[i][3]&&a[i][j]>=a[i][4])
			{
				if(a[i][j]<=a[0][j]&&a[i][j]<=a[1][j]&&a[i][j]<=a[2][j]&&a[i][j]<=a[3][j]&&a[i][j]<=a[4][j])
				{
					k=i+1;
					t=j+1;
					cout<<k<<" "<<t<<" "<<a[i][j];
				}
				else
					m++;
			}
			else
				m++;
		}
	}
	if(m==25)
		cout<<"not found";
	 
	return 0;
}
				 


