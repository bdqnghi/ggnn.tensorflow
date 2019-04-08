//************************************************
// file: 2.cpp
// description: ?????????
// date: 2012-11-24
// author: ?? 1200012858
//************************************************
void zero( int array[100][100]);
void subduction( int array[100][100]);
int num, array[100][100];
int main()
{
	int n, i, j, k, sum;
	cin >> n;
	for (k = 0; k < n; k++)
	{
		sum = 0;
		num = n;
	    for (i = 0; i < n; i++)
		   for (j = 0; j < n; j++)
		  	  cin >> array[i][j];
	    for (i = 1; i < n; i++)
	    {
		   zero(array);
		   sum = sum + array[1][1];
		   subduction(array);
	    }
	    cout << sum << endl;
	}
	return 0;
}
void zero(int array[100][100])
{
	int i, j, minuend;
	for (i = 0; i < num; i++)
	{
		minuend = array[i][0];
		for (j = 0; j < num; j++)
			if (array[i][j] < minuend)
				minuend = array[i][j];
		for (j = 0; j < num; j++)
			array[i][j] = array[i][j] - minuend;
	}
	for (i = 0; i < num; i++)
	{
		minuend = array[0][i];
		for (j = 0; j < num; j++)
			if (array[j][i] < minuend)
				minuend = array[j][i];
		for (j = 0; j < num; j++)
			array[j][i] = array[j][i] -minuend;
	}
};

void subduction( int array[100][100])
{
	int i, j, k;
	for (i = 2; i < num; i++)
		for (j = 0; j < num; j++)
			array[i - 1][j] = array[i][j];
	for (i = 2; i < num; i++)
		for (j = 0; j < num; j++)
			array[j][i - 1] = array[j][i];
	num--;
};