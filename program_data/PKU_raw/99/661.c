/************************************
 *   ????????				*
 *   ??????  1200012815		*
 *   ???2012.9.25				*
 ************************************/
int main()
{
	int n, i, a;
	cin >> n;
	double a1, a2, a3, a4;
	a1 = a2 = a3 = a4 =0;
	for (i = 1; i <= n; i ++)
	{
		cin >> a;
		if (a <= 18)
			a1 ++;
		else if (a >= 19 && a <= 35)
			a2 ++;
		else if (a >= 36 && a <= 60)
			a3 ++;
		else 
			a4 ++;
	}
	cout << fixed << setprecision(2) << "1-18: " << 100 * a1 / n << "%" << endl;
	cout << fixed << setprecision(2) << "19-35: " << 100 * a2 / n << "%" << endl;
	cout << fixed << setprecision(2) << "36-60: " << 100 * a3 / n << "%" << endl;
	cout << fixed << setprecision(2) << "60??: " << 100 * a4 / n << "%" << endl;
	return 0;
}

