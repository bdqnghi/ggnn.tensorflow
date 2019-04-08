int main()
{
	int n,b[10],a[10][10],i,j,t[10];   //a[10][10]???????????????????????total???????????
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>b[i];
		for(j=1;j<=b[i];j++) 
			cin>>a[i][j];
	}
	/*for(i=1;i<=n;i++)
		cout<<b[i];
		for(i=1;i<=n;i++)	
			for(j=1;j<=b[i];j++)
				cout<<a[i][j];
	return 0;
}
*/
	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=b[i];j++)
		{
			if((a[i][j-1]+3*(j-1)<60)&&(a[i][j]+3*j>60))
				t[i]=3*j-3;
			if((a[i][j]+2*j<=60)&&(a[i][j]+3*b[i]>60))
				t[i]=60-a[i][j];
		}
		if(a[i][b[i]]+3*b[i]<60)
			t[i]=3*b[i];
		if((a[i][b[i]]+2*b[i]<=60)&&(a[i][b[i]]+3*b[i]>60))
			t[i]=60-a[i][b[i]];
	}
	for(i=1;i<=n;i++)
	{
		cout<<60-t[i]<<endl;
	}
	return 0;
}



