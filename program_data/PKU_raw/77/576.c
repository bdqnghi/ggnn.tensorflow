/**
* @file 1.cpp
* @author ???
* @date 2011-09-24
* @description
* ??????:?????
*/

// ??????pai???
int pai(char xiao[], int n, int v, int i)
{
	int j, k; 
	if (xiao[i + 1] == 0)
		return 0;
	for (j = i + 1; xiao[j] != 0; j++)
	{
		if (xiao[j] == v)
			break;
	}
	for (k = j; xiao[k] != 0; k--)
	{
		if (xiao[k] == n)
		{
			xiao[k] = 1;
			break;
		}
	}
	cout << k << ' ' << j <<endl;
	pai(xiao, n, v, j);
	return 0;
}

int main()
{
	int n, i, v;
	char xiao[100] = {0};
	cin >> xiao;
	n = xiao[0];
	for (i = 1; i <= 100; i++)
	{
		if(xiao[i] != n)
		{
			v = xiao[i];
			break;
		}
	}
	pai(xiao, n, v, i - 1);
	return 0;
}