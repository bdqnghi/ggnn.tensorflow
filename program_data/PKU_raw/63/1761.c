int main()
{
	int a[100][100] = {0}, b[100][100] = {0}, c[100][100] = {0};
	int I = 0, J = 0, P = 0, Q = 0;
	cin>>I>>J;
	for(int i = 0; i < I; i++)
		for(int j = 0; j < J; j++)
			cin >> a[i][j];
	cin >> P >> Q;
	for(int i = 0; i < P; i++)
		for(int j = 0; j < Q; j++)
			cin >> b[i][j];
	for(int i = 0; i < I; i++)
		for(int j = 0; j < Q; j++)
			for( int q = 0; q < J; q++)
				c[i][j] += a[i][q] * b[q][j];
	for(int i = 0; i < I; i++)
		for(int q = 0; q < Q; q++)
			{
				if(q < Q - 1)
					cout << c[i][q] <<" ";
				if(q == Q - 1)
					cout << c[i][q] << endl;
		}
		return 0;
}