/*
 * ewszyszxbl.cpp
 * ??????????
 *  Created on: 2012-12-10
 *      Author: Salforever
 */

int main()
{
	int *p,row,col,array[105][105],i,j;//????
	cin >> row >> col;//???????
	for (i=1;i<=row;i++)//????
		for (j=1;j<=col;j++)
		{
			cin >> array[i][j];
		}
	for (j=1;j<=col;j++)//???????????
	{
		p=&array[1][j];
		for (i=1;i<=j&&i<=row;i++)
		{
			cout << *p << endl;
			p=p+104;
		}
	}
	for (i=2;i<=row;i++)//?????????????
	{
		p=&array[i][col];
		for (j=1;j<=col&&j+i<=row+1;j++)
		{
			cout << *p << endl;
			p=p+104;
		}
	}
	return 0;
}
