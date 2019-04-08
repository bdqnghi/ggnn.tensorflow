//*********************************
//* ??? 2?N??               *
//* ??? ??                   *
//* ??? 2013.11.15             *
//*********************************

int main()
{
	int N;
	int a[50] = {0}, len = 1;
	a[0] = 1;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < len; j++)
		{
			a[j] *= 2;
		}

		for (int m = 0; m < len; m++)
		{
			if (a[m] > 9)
			{
				a[m] -= 10;
				a[m+1] += 1;
				if (m == len - 1) len++; 
			}
		}
	}

	for (int k = len - 1; k >= 0; k--) cout << a[k];
	return 0;
}


			

	

	

