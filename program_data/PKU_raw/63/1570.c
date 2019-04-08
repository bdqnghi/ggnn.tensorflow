//****************************
//*@file:4.cpp               *
//*@author:??? 1200012894 *
//*@date:2012.11.7           *
//*@function:??????    *
//****************************

int main()
{
	int x1, y1, x2, y2;  // x1, y1???1???????x2, y2???2??????
	int matrix1[100][100], matrix2[100][100], matrix3[100][100];  //matrix1, matrix2???matrix3
	int i, j, k, l, r, t, p, number; // number???????i, j, k, l, r, t, p?????
	memset(matrix3, 0, sizeof(matrix3));  
	cin >> x1 >> y1;
	for (i = 0; i < x1; i++)  // ?????i?x1
	{
		for (j = 0; j < y1; j++)  // ?????j?y1
		{
			cin >> number;
			matrix1[i][j] = number;
		} // end for
	} // end for 
	cin >> x2 >> y2;
	for (k = 0; k < x2; k++)  // ??????k?x2
	{
		for (l = 0; l < y2; l++)  // ??????l?y2
		{
			cin >> number;
			matrix2[k][l] = number;
		}
	}
	for (r = 0; r < x1; r++)  // ??????????matrix3???x1 * y2???
	{
		for (t = 0; t < y2; t++)
		{
			for(p = 0; p < y1; p++)  // y1 = x2,????p????
			{
				matrix3[r][t] = matrix1[r][p] * matrix2[p][t] + matrix3[r][t];
			}
		}
	}
	for (i = 0; i < x1; i++)
	{
		for(j = 0; j < y2; j++)
		{
			if (j != y2 - 1)
			{
				cout << matrix3[i][j] << " ";
			}
			else
			{
				cout << matrix3[i][j];
			}
		}
		cout << endl;
	}
	return 0;
}
