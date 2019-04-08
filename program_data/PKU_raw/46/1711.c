int main()
{
    int 	arrey [100][100];
	int i, j, k, times, all;
	int row, col;
	
	cin >> row >> col;
	for(i = 0; i < row; i ++)
		for(j = 0; j < col ; j ++)
			cin >> arrey[i][j];
		k = 0;
		times = 0;
		all = row * col;
		do{
			i = k;
			j = k;
			for( ; j <= col - 1; j ++)
			{
				cout <<  arrey[i][j] << endl;
				times ++;
			}
			--j;
			if( times == all)
						break;
		     for(++i ; i <= row - 1;i ++)
					{
				 cout << arrey[i][j] << endl;
						times ++;}
			--i;
			if( times == all)
						break;
					for( --j;j >= k; j --)
					{
						cout << arrey[i][j] << endl;
						times ++;
					}
					if( times == all)
						break;
					++j;
					for(--i ;i > k; i --)
					{
						cout << arrey[i][j] << endl;
						times ++; 
					}
			if( times == all)
						break;
					col --;
					row --;
					k ++;
		}while(1);
			return 0;
}