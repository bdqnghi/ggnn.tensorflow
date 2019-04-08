/*************************************************************************************************************
* @file .cpp
* @author ????
* @date 
* @description
*         
*/


int main()
{
	int n, i, j, s;
	int a[40] = {0};
	cin >> n;
	a[0] = 1;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < 40; j++)
			a[j] = 2 * a[j];
		for(s = 39;a[s] == 0; s--);
		for(j = 0; j <= s; j++)
		{
			a[j + 1] += a[j] / 10;
			a[j] = a[j] % 10;
		}
	}
	for(s = 39;a[s] == 0; s--);
	for(i = s; i >=0; i--)
		cout << a[i];
	cout << endl;
	return 0;
}