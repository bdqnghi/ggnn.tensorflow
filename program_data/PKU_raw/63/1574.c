/*
 * matrix multiplication.cpp
 *
 *  Created on: 2012-11-10
 *      Author: Administrator
 */


int main(){
	int x1, y1, x2, y2;
	int a[110][110], b[110][110], c[110][110];
	int num, i, j, k;

	cin >> x1 >> y1;
	for (i = 0; i < x1; i++)
	{
		for (j = 0; j < y1; j++)
		{
			cin >> num;
			a[i][j] = num;
		}
	}
	cin >> x2 >> y2;
	for (i = 0; i < x2; i++)
	{
		for (j = 0; j < y2; j++)
		{
			cin >> num;
			b[i][j] = num;
		}
	}

	for (i = 0; i < x1; i++)
	{
		for (j = 0; j < y2; j++)
		{
			for (k = 0; k < y1; k++)
			{
				c[i][j] = a[i][k] * b[k][j] + c[i][j];
			}
		}
	}

	for (i = 0; i < x1; i++)
	{
		for (j = 0; j < y2; j++)
		{
			if (j < y2 - 1)
				cout << c[i][j] << " ";
			else
				cout << c[i][j] << endl;
		}
	}
	return 0;
}