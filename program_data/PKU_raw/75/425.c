/**
* @file homework.cpp
* @author ??
* @date 2010?11?26
* @description
* ??????: ?????   
*/
int main()
{
	int a[2000][2], i=0, j=0, k, l, l1, l2, m, n, maxt, mint, q, g=0, max=0;                   //????
	char b[9000], c[9000];                                                                     //??????????
	cin.getline(b,9000,'\n');
	cin.getline(c,9000,'\n');                                                                  //??
	l1 = strlen(b);
	l2 = strlen(c);
	for (k=0;k<l1;k++)
	{
		if (b[k+1] == ',' || b[k+1] == '\0')
		{
			a[i][0] = b[k] - '0';
			i++;
			k = k + 1;
			continue;
		}
		else
		{
			if (b[k+2] == ',' || b[k+2] == '\0')
			{
				m = b[k] - '0';
				n = b[k+1] - '0';
				a[i][0] = 10 * m + n;
				i++;
				k = k + 2;
				continue;
			}
			if (b[k+3] == ','|| b[k+3] == '\0')
			{
				m = b[k] - '0';
				n = b[k+1] - '0';
				q = b[k+2] - '0';
				a[i][0] = 100 * m + 10 * n + q;
				i++;
				k = k + 3;
				continue;
			}
		}
	}                                                                                               //????????
	for (k=0;k<l2;k++)
	{
		if (c[k+1] == ','||c[k+1] == '\0')
		{
			a[j][1] = c[k] - '0';
			j++;
			k = k + 1;
			continue;
		}
		else
			if (c[k+2] == ',' || c[k+2] == '\0')
			{
				m = c[k] - '0';
				n = c[k+1] - '0';
				a[j][1] = 10 * m + n;
				j++;
				k = k + 2;
				continue;
			}
			if (c[k+3] == ',' || c[k+3] == '\0')
			{
				m = c[k] - '0';
				n = c[k+1] - '0';
				q = c[k+2] - '0';
				a[j][1] = 100 * m + 10 * n + q;
				j++;
				k = k + 3;
				continue;
			}
	}                                                                                         //????????
	mint = a[0][0];
	maxt = a[0][1];
	for (k=1;k<i;k++)
	{
		if (mint > a[k][0])
			mint = a[k][0];
		if (maxt < a[k][1])
			maxt = a[k][1];
	}                                                                                         //????????
	for (k=mint;k<=maxt;k++)
	{
			
			g = 0;
			for (l=0;l<i;l++)
			{
				if (a[l][0] <= k && a[l][1] > k)
					g++;
			}
			if (max < g)
				max = g;
	}                                                                                         //??
	cout <<  i << " "<< max;                                                                  //????
	return 0;
}