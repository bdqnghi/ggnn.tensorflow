int main()
{
	int a[11][11]={0},b[11][11]={0},m,n,i,j,k;
	cin>>m>>n;
	a[5][5]=m;
	for(i=0;i<n;i++)
	{
		for(j=1;j<10;j++)
			for(k=1;k<10;k++)
			{
				b[j][k+1]=a[j][k]+b[j][k+1];b[j][k-1]=a[j][k]+b[j][k-1];b[j-1][k+1]=a[j][k]+b[j-1][k+1];b[j+1][k+1]=a[j][k]+b[j+1][k+1];
				b[j-1][k]=a[j][k]+b[j-1][k];b[j+1][k]=a[j][k]+b[j+1][k];b[j+1][k-1]=a[j][k]+b[j+1][k-1];b[j-1][k-1]=a[j][k]+b[j-1][k-1];
				a[j][k]=2*a[j][k];
			}
		for(j=1;j<10;j++)
			for(k=1;k<10;k++)
				a[j][k]=a[j][k]+b[j][k];
		for(j=0;j<11;j++)
			for(k=0;k<11;k++)
				b[j][k]=0;
	}
	for(i=1;i<10;i++)
		for(j=1;j<10;j++)
		{
			if(j==1)
				cout<<a[i][j];
			else 
				cout<<' '<<a[i][j];
			if(j==9)
				cout<<endl;
		}
	return 0;
}