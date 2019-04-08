/*
 * T22.cpp
 *
 *  Created on: 2012-11-10
 *      Author: weiwan
 */

int main()
{
	int x[1010],y[1010],count[1010],xmin,ymax,countmax;
	int i,j;
	int n = 0;
	char c;
	memset(count,0,sizeof(count));
	do
	{
		cin >>x[n];n++;
		c = getchar();
	}while(c != '\n');
	n = 0;
	do{
		cin >>y[n];n++;
		c = getchar();
	}while(c != '\n');

	xmin = x[0];
	for (i = 1;i < n;i ++)
		if(x[i] < xmin)xmin = x[i];

	ymax = y[0];
	for (i = 1;i < n;i ++)
		if (y[i] > ymax)ymax = y[i];

	for (i = xmin;i <= ymax;i ++)
		for (j = 0;j < n;j ++)
		{
			if (x[j] <= i && y[j] > i)count[i] ++;
		}

	countmax = count[0];
	for (i = xmin;i <= ymax;i ++)
		if (count[i] > countmax)countmax = count[i];

	cout <<n <<' ' <<countmax <<endl;

	return 0;
}