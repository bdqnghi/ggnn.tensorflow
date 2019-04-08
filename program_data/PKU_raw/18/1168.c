/*************************************************************************************************************
* @file .cpp
* @author ????
* @date 1119
* @description
*         ???0
*/

int i, j, k, l;
int a[100][100];
int xiao(int n)
{
	int min, s;
	for(j = 0; j < n; j++)
	{
		min = a[j][0];
		for(k = 1; k < n; k++)
			min = (a[j][k] < min) ? a[j][k] : min; 
		for(k = 0; k < n; k++)
			a[j][k] -= min;
	}
	for(j = 0; j < n; j++)
	{
		min = a[0][j];
		for(k = 1; k < n; k++)
			min = (a[k][j] < min) ? a[k][j] : min; 
		for(k = 0; k < n; k++)
			a[k][j] -= min;
	}
	if (n == 2)
		return a[1][1];
	s = a[1][1];
	for(i = 1; i < n - 1; i++)
	{
		a[0][i] = a[0][i + 1];
		a[i][0] = a[i + 1][0];
		for(j = 1; j < n - 1; j++)
			a[i][j] = a[i + 1][j + 1];
	}
	n -= 1;
	return (s + xiao(n));
}
int main()
{
	
	int n, result[100];
	cin >> n;
	for (l = 0; l < n; l++)
	{
		for(j = 0; j < n; j++)
		{
			for(k = 0; k < n; k++)
				cin >> a[j][k];
		}
		result[l] = xiao(n);
	}
	for(l = 0; l < n ; l++)
		cout << result[l] << endl;
	return 0;
}