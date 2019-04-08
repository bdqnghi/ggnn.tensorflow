
int main()
{
	int x1 , y1 , x2 ,y2 ,a[102][102] , b[102][102] ,c[102][102] = {0};
	cin>>x1>>y1;
	for( int i = 1 ;i <= x1 ;i++)
	{
		for( int j = 1 ; j <= y1 ; j++)
		{
			cin>>a[i][j];
		}
		cout<<endl;
	}
	cin>>x2>>y2;
	for( int p = 1 ;p <= x2 ;p++)
	{
		for( int d = 1 ; d <= y2 ; d++)
		{
			cin>>b[p][d];
		}
		cout<<endl;
	}
	for( int e = 1 ;e <= x1 ;e++)
	{
		for( int f= 1 ; f <= y2 ; f++)
		{
		for( int k = 1  ; k <= y1 ; k++)
		{
			c[e][f] += a[e][k] * b[k][f];
		}
		}
	}
	for( int g = 1 ;g <= x1 ;g++)
	{
		for( int h = 1 ; h <= y2; h++)
		{
			if( h != y2 )
			{
			cout<<c[g][h]<<" ";
			}
			else if( h == y2)
			{
				cout<<c[g][h];
			}
		}
		cout<<endl;
	}

	return 0;
}
