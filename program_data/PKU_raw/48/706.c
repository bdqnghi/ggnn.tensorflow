int main()
{
	int m,n,day,dish[11][11],left[11][11],add[11][11],i,j,k;
	cin>>m>>day;
	for(i=0;i<11;i++)
	{
		for(j=0;j<11;j++)
		{
			dish[i][j]=0;
		}
	}
	dish[5][5]=m;
	for(n=0;n<day;n++)
	{
		for(i=1;i<10;i++)
		{
			for(j=1;j<10;j++)
			{						
				left[i][j]=2*dish[i][j];
              	add[i][j]=dish[i][j-1]+dish[i-1][j]+dish[i][j+1]+dish[i+1][j]+dish[i-1][j-1]+dish[i+1][j+1]+dish[i-1][j+1]+dish[i+1][j-1];
				
			}
		}
		for(i=1;i<10;i++)
		{
			for(j=1;j<10;j++)
			{
				dish[i][j]=left[i][j]+add[i][j];
			}
		}
	}
    for(i=1;i<10;i++)
    {
		k=0;
		for(j=1;j<10;j++)
		{	
			if(k==0)
				cout<<dish[i][j];
			if(k>0)
				cout<<" "<<dish[i][j];
			k++;
		}
		cout<<endl;
    }
	return 0;
}