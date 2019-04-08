int main()
{
	int row,col; //row????col???
	int i,j;//????
	int a[100][100];// ????????
	cin>>row>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			cin>>a[i][j];
	}
	int m,n,t;//m???????n??????,t?????
	m=row;
	n=col;
	t=0;
	for(t=0;(t<n-t)&&(t<m-t);t++)
	{
		for(i=t,j=t;j<n-t;j++)
		{
			cout<<a[i][j]<<endl;
		}
		if(j==t) break;

	    for(i=1+t,j=n-t-1;i<m-t;i++)
		{
	    	cout<<a[i][j]<<endl;

		}
	    if(i==1+t) break;

	    for(i=m-t-1,j=n-2-t;j>=t;j--)
	    {
	    	cout<<a[i][j]<<endl;

	    }
        if(j==n-2-t) break;
	    for(i=m-2-t,j=t;i>=1+t;i--)
		{
	    	cout<<a[i][j]<<endl;

		}

	}
	return 0;

}
