

int main ()
{
	int x1,x2, y1, y2, i, j,k ;
	int str1[100][100], str2[100][100], str3[100][100];

	cin >> x1 >>y1;
	for( i = 0; i < x1; i ++)
	{
		for( j = 0; j < y1; j ++)
		{
			cin >> str1[i][j];
		}
	}
	i = 0;
	j = 0;
	cin >> x2 >> y2;
    for( i = 0; i < x2; i ++)
	{
		for( j = 0; j < y2; j ++)
		{
			cin >> str2[i][j];
		}
	}
	i = 0;
	j = 0;
    str3[0][0] = 0;
    for( i = 0; i < x1; i ++)
	{
		for( j = 0; j < y2; j ++)
		{
			for(k =0; k < y1; k ++)
			{
		     str3[i][j] = str1[i][k]* str2[k][j] + str3[i][j];
			}
		}
	}
	i = 0;
	j = 0;
	for( i=0; i < x1; i ++)
	{
		for ( j = 0; j < y2; j ++)
		{
			if(j == y2 - 1)
			{
				cout << str3[i][j] << endl;
			}
			else
				cout << str3[i][j] <<" ";
		}
	}
	return 0;
}

	

