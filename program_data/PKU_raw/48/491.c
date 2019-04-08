//****************************************
//*???????????                               **
//*?????? 1100012760**
//*???2011.11.26                          **
//****************************************
int main()
{
	int mat[10][10] = {0} , New[10][10];
	int i , j , l , m , n;
	cin >> m >> n;
	mat[5][5] = m;
	for(i = 1 ; i <= n ; i++)
	{
		for (j = 1 ; j <= 9 ; j++)
		{
			for (l = 1 ; l <= 9 ; l++)
			{
				New[j][l] = 0;
			}
		}
		for (j = 1 ; j <= 9 ; j++)
		{
			for (l = 1 ; l <= 9 ; l++)
			{
				New[j][l] += 2 * mat [j][l];
				New[j - 1][l - 1] += mat [j][l];
				New[j + 1][l - 1] += mat [j][l];
				New[j - 1][l + 1] += mat [j][l];
				New[j + 1][l + 1] += mat [j][l];
				New[j][l - 1] += mat [j][l];
				New[j - 1][l] += mat [j][l];
				New[j + 1][l] += mat [j][l];
				New[j][l + 1] += mat [j][l];
			}
		}
		for (j = 1 ; j <= 9 ; j++)
		{
			for (l = 1 ; l <= 9 ; l++)
			{
				mat[j][l] = New[j][l];
			}
		} 
	}
	for (j = 1 ; j <= 9 ; j++)
	{
		cout << mat[j][1];
		for (l = 2 ; l <= 9 ; l++)
		{
			cout << ' ' << mat[j][l];
		}
		cout << endl;
	}
	return 0;
}

