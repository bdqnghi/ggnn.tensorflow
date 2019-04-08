int main()
{
	int x,y,i,j,a[100][100];
	double b[100][200];
	for(j=0;j<200;j++)
		for(i=0;i<100;i++)
			b[i][j]=0.5;
	cin>>x>>y;
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			cin>>a[i][j];
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			b[i][j+i]=a[i][j];
	for(j=0;j<200;j++)
		for(i=0;i<100;i++)
			if(b[i][j]!=0.5)
				cout<<b[i][j]<<endl;
	return 0;
}