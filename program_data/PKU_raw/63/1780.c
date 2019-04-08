
 
int main()
{
	int row1,row2,col1,col2,i,j,a[100+10][100+10],b[100+10][100+10],c[100+10][100+10]={0},k;
	cin>>row1>>col1;
	for(i=1;i<=row1;i++)
		for(j=1;j<=col1;j++)
			cin>>a[i][j];
	cin>>row2>>col2;
	for(i=1;i<=row2;i++)
		for(j=1;j<=col2;j++)
			cin>>b[i][j];
	for(i=1;i<=row1;i++)
		for(j=1;j<=col2;j++)
			for(k=1;k<=col1;k++)
				c[i][j]+=a[i][k]*b[k][j];
	for(i=1;i<=row1;i++)
		{
			for(j=1;j<col2;j++)
			{cout<<c[i][j]<<' ';}
	        cout<<c[i][col2]<<endl;
	    }
	return 0;
}
