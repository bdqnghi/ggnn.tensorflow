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
			for( ; j < col - 1; j ++)
			{
				cout <<  arrey[i][j] << endl;
				times ++;
			}
		     for( ; i < row - 1;i ++)
					{
				 cout << arrey[i][j] << endl;
						times ++;}
			 if( k < col - 1 && k < row - 1 )
			 {

					for( ;j > k; j --)
					{
						cout << arrey[i][j] << endl;
						times ++;
					}
					for( ;i > k; i --)
					{
						cout << arrey[i][j] << endl;
						times ++; 
					}
			 }

				else	if( k == col - 1 && col == row )
					{
						cout << arrey[k][k];
						times++;
					}
				else
				{
					cout << arrey[i][j];
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