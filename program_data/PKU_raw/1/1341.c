/*************************************************************************************************************
* @file .cpp
* @author ????
* @date 
* @description
*         ????
*/

int i;
int fenjie( int x, int t)
{
	int j;
	if(x == 1 || x == 2)
		return 1;
	int s = 1;
	for (j = t; j <= sqrt(x); j++)
	{
		if (x % j == 0)
			s += fenjie((x / j), j);
	}
	return s;
}

int main()
{
	int n, a[100],x,t;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> x;
		a[i] = fenjie(x,2);
	}
	for(i = 0; i < n; i++)
		cout << a[i] << endl;
	return 0;
}