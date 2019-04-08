/*
 * shuzu.2.3.cpp
 *
 *  Created on: 2012-11-19
 *      Author: wangrunhui
 */


int main()
{
	int n,a[10][3],i,j,k ,ai[100],ak[100],l = 0,tempi,tempk;//a?????i,j,k,l???????ai?ak??????????
	double d[100],tempd;//d????
	cin >> n;
	for ( i = 0; i < n; i ++)//?a??
	{
		for ( j = 0; j < 3; j ++)
			cin >> a[i][j];
	}
	for ( i = 0; i < n; i ++)//????????????????????
	{
		for ( k = i + 1; k < n; k ++ )//???i+1?????????????
		{
			d[l] = sqrt( (a[i][0] - a[k][0]) * (a[i][0] - a[k][0])
					+ (a[i][1] - a[k][1]) * (a[i][1] - a[k][1])
					+ (a[i][2] - a[k][2]) * (a[i][2] - a[k][2]) );
			ai[l] = i;//??????
			ak[l] = k;
			l ++;//?????????
		}
	}
	for ( i = 0 ; i < l - 1; i ++)//????????????????????????????
	{
		for ( j = 0; j < l - i - 1; j ++)
		{
			if ( d[j] < d[j + 1])
			{
				tempd = d[j];
				d[j] = d[j + 1];
				d[j + 1] = tempd;
				tempi = ai[j];
				ai[j] = ai[j + 1];
				ai[j + 1] = tempi;
				tempk = ak[j];
				ak[j] = ak[j + 1];
				ak[j + 1] = tempk;
			}
		}
	}
	for ( j = 0; j < l ; j ++)//??????
	{
		i = ai[j];
		k = ak[j];
		cout << '(' << a[i][0] << ','<< a[i][1] << ',' << a[i][2] << ")-(";
		cout << a[k][0] << ',' << a[k][1] << ',' << a[k][2]<< ")=";
		cout<< fixed << setprecision(2) <<d[j]<<endl;//???????
	}
}
