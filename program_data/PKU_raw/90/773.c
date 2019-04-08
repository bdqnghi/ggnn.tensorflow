//****************************************
//*????????                     **
//*?????? 1100012763              **
//*???2011.11.17                     **
//****************************************

int ans[101][101];

int jisuan(int apple, int plate)
{
	int num;
	if (ans[apple][plate] == -1)
	{
		num = jisuan(apple , plate - 1);
		if (apple - plate >= 0)
			num = num + jisuan(apple - plate , plate);
		return num;      
	}
	else
		return ans[apple][plate];
}

int main() 
{
	int i , j , t , k , apple , plate;
	cin >> t;
	for (i = 1; i <= t; i++)
	{
		for (j = 0; j <= 100; j++)
			for (k = 0; k <= 100; k++)
				ans[j][k] = -1;
		for (j = 0; j <= 100; j++)
		{
			ans[j][1] = 1;
			ans[0][j] = 1;
		}
		cin >> apple >> plate;
		cout << jisuan(apple , plate) << endl;
	}

	return 0;
}
