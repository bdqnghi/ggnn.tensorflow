//********************************
//*???2.cpp   **
//*?????? 1200012768 **
//*???2012.11.21  **
//*????????????  **
//********************************
int sum = 0, r_small[100] = {0}, c_small[100] = {0};

int fun(int num[][100], int n);

void small1(int num[][100], int n);

void small2(int num[][100], int n);

int main()
{
	int n, i, j, num[100][100];
	cin >> n;
	for (int p = 0; p < n; p++)
	{
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				cin >> num[i][j];
		fun(num, n);
		cout << sum << endl;
		sum = 0;					//??????????? 
	}
	return 0;
}

int fun(int num[][100], int n)
{
	if (n == 1)
		return sum;
	int i, j;
	small1(num, n);				//???????? 
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			num[i][j] = num[i][j] - r_small[i];	//????????????
	small2(num, n);				//????????????
	for (j = 0; j < n; j++)
		for (i = 0; i < n; i++)
			num[i][j] = num[i][j] - c_small[j];	//????????????
	sum += num[1][1];			//??sum 
	for (i = 0; i < n; i++)
		for (j = 1; j < n - 1; j++)
			num[i][j] = num[i][j + 1];	//?? 
	for (j = 0; j < n - 1; j++)
		for (i = 1; i < n - 1; i++)
			num[i][j] = num[i + 1][j];
	fun(num, n - 1);					//?? 
}

void small1(int num[][100], int n)	//????????
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		r_small[i] = num[i][0];
		for (j = 1; j < n; j++)
			r_small[i] = (r_small[i] < num[i][j]) ? r_small[i] : num[i][j];
	}
}

void small2(int num[][100], int n)	//????????
{
	int i, j;
	for (j = 0; j < n; j++)
	{
		c_small[j] = num[0][j];
		for (i = 1; i < n; i++)
			c_small[j] = (c_small[j] < num[i][j]) ? c_small[j] : num[i][j];
	}
}