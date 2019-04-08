int main()
{
	int x1,x2,y1,y2;
	int a[100][100];
	int b[100][100];
	int c[100][100];
	cin >> x1>>y1;
	for(int i=0;i<=x1-1;i++)
		for(int j=0;j<=y1-1;j++)
			cin >>a[i][j];
	cin >> x2>>y2;
	for(int i=0;i<=x2-1;i++)
		for(int j=0;j<=y2-1;j++)
			cin >>b[i][j];
	memset(c,0,sizeof(c));
	for(int i=0;i<=x1-1;i++)
		for(int j=0;j<=y2-1;j++)
		{
			for(int k=0;k<=x2-1;k++)
				c[i][j]+=a[i][k]*b[k][j];
			if(j==y2-1)
			{
				if(i!=x1-1)
					cout << c[i][j] << endl;
				else
					cout << c[i][j];
			}
			else
				cout << c[i][j] << " ";
		}
return 0;
}