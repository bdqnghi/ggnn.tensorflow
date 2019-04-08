/******************************
 *No.1                        *
 *Title:Celebrity             *
 *Author:??                 *
 *Created on:2011.12.7        *
 ******************************/
int main()
{
	int n,i,j,flag = 1,a[100000] = {0};
	int *p = a;
	cin >> n;
	while(i != 0 || j != 0)
	{
		cin >> i >> j;
		a[j]++;
	}
	for(j = 0 ; j < n ; j++)
	{
		if(*(p + j) == n - 1 || *(p + j) == n)
		{
			cout << j << endl;
			flag = 0;
		}
	}
	if(flag)
	{
		cout << "NOT FOUND" << endl;
	}
	return 0;
}
