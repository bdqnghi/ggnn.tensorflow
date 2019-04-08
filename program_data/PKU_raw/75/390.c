
/**
* @file 1000012800_1.cpp
* @author ??
* @date 2010-11-24
* @description
* ??????:????? 
*/

int main()
{
	int count = 0, x[10000] = {0}, y[10000] = {0},time[1000] = {0}, n = 0, w = 0;
	char inputx[10000], inputy[10000];
	cin >> inputx >> inputy;
	for (int i = strlen(inputx) - 1; i >= 0; i --)
	{
		if(inputx[i] != ',')
		{
			x[n] += (inputx[i] - 48) * pow((double)10,w);
			w ++;
		}
		else
		{
			n ++;
			w = 0;
		}
	}
	w = 0;
	n = 0;
	for (int i = strlen(inputy) - 1; i >= 0; i --)
	{
		if(inputy[i] != ',')
		{
			y[n] += (inputy[i] - 48) * pow((double)10,w);
			w ++;
		}
		else
		{
			n ++;
			w = 0;
		}
	}
	for (int i = 0; i <= n; i ++)
		for(int j = x[i]; j < y[i]; j ++)
			time[j] ++;
	for(int i = 0; i < 1000; i ++)
	{
		if(time[i] > count)
			count = time[i];
	}
	cout << n + 1 << " " << count << endl;
		

	return 0;
}




