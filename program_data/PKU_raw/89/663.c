/**
* @file homework.cpp
* @author ??
* @date 2010?11?09
* @description 
* ??????:??????  
*/
int a[9000][9000] = {0};                    //??????A??B
int main()
{
	int i, j, n, g, flag = 0;
	cin >> n;
	cin >> i >> j;
	while (i != 0 || j!=0)
	{
		a[i][j] = 1;
		cin >> i >> j;                     //????
	}
	for (j=0;j<n;j++)
	{
		g = 0;
		for(i=0;i<n;i++)
		{
		
			if (i > 1 && g == 0)
				break;
			if (a[i][j] == 1)
				g++;
		}
		if (g == n-1)                   //????
		{
			cout << j;
			flag = 1;
			break;
		}
	}
	if (flag == 0)                     //??????
		cout << "NOT FOUND";
	return 0;
}
