int main ()
{
	int a[101][101],b[101][101],c[101][101];
	int x1,x2,y1,y2,i,j;
	cin>>x1>>x2;
	for ( i=0; i<x1; i++ )
		for ( j=0; j<x2; j++ )
			cin>>a[i][j];
	cin>>y1>>y2;
	for ( i=0; i<y1; i++ )
		for ( j=0; j<y2; j++ )
			cin>>b[i][j];
			c[0][0]=0;
	for ( i=0; i<x1; i++ )
		for ( int j=0; j<y2; j++ )
			for ( int k=0; k<x2; k++ )
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
	for ( i=0; i<x1; i++ )
			for ( int j=0; j<y2; j++ )
			{
				if ( (j+1)%y2!=0 )
				cout<<c[i][j]<<' ';
				else
				cout<<c[i][j]<<endl;
			}
	return 0;
}
