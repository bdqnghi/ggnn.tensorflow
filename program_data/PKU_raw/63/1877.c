int main()
{
	int x1,y1,i=0,j=0,k=0;
	cin >> x1 >> y1;
	int a[x1][y1];
	for (int i=0; i<x1; i++)
		for (int j=0; j<y1; j++)
			cin >> a[i][j];
	int x2,y2;
	cin >> x2 >> y2;
	int b[x2][y2];
	for (int i=0; i<x2; i++)
		for (int j=0; j<y2; j++)
			cin >> b[i][j];
	int c[x1][y2];
	for (int i=0; i<x1; i++)
		for (int j=0; j<y2; j++)
		{
			c[i][j]=0;
			for (int k=0; k<y1; k++)
				c[i][j]+= a[i][k]*b[k][j]; 
			cout<<c[i][j];
			if (j<y2-1)
				cout<<" ";
			else
				cout<<endl;
		}	
	return 0;
}