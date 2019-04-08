int main()
{
	int n,m,i,j,a[5][5];
	
		for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>*(*(a+i)+j);
		cin>>n>>m;
	if(m<5&&n<5)
	{
		for(i=0;i<5;i++)
		{
			if(i==n)
			{	for(j=0;j<4;j++)
					cout<<a[m][j]<<" ";
			cout<<a[m][4];
					cout<<endl;
			}
		    else if(i==m)
			{	for(j=0;j<4;j++)
					cout<<a[n][j]<<" ";
			   cout<<a[n][4];
			cout<<endl;
			}
				else
				{	for(j=0;j<4;j++)
						cout<<a[i][j]<<" ";
				cout<<a[i][4];
				cout<<endl;
				}
			}
	}
	else cout<<"error";
return 0;
}

