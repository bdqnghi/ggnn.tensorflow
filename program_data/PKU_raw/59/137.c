/*
 * 4.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */
int main()
{
	int a[102][102]={0},b[102][102]={0};
	int i,j,n,m,num=0;
	char temp;
	cin >>n;
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=n; j++)
		{
			cin >>temp;
			switch (temp)
			{
			case '.': a[i][j]=1;break;
			case '#': a[i][j]=0;break;
			case '@': a[i][j]=2;break;
			}
			b[i][j] = a[i][j];
		}
	}

	cin >>m;
	while (--m)
	{
		for (i=1; i<=n; i++)
			for (j=1; j<=n; j++)
				if (a[i][j]==2)
				{
					if (a[i-1][j]) b[i-1][j]=2;
					if (a[i+1][j]) b[i+1][j]=2;
					if (a[i][j-1]) b[i][j-1]=2;
					if (a[i][j+1]) b[i][j+1]=2;
				}
		for (i=1; i<=n; i++)
			for (j=1; j<=n; j++)
				a[i][j] = b[i][j];
	}
	for (i=1; i<=n; i++)
		for (j=1; j<=n; j++)
			if (a[i][j] == 2) num++;
	cout <<num;
	return 0;
}
