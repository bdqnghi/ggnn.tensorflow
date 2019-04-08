int main()
{
	int a[] = {31,28,31,30,31,30,31,31,30,31,30,31}, b[] = {31,29,31,30,31,30,31,31,30,31,30,31}, n;
	int YY, M1, M2, i, j, d;
	cin >> n;
	for(i = 1; i <=n; i++)
	{
		d = 0;
		cin >> YY >> M1 >> M2;
		if((YY % 4 == 0 && YY % 100 != 0) || YY % 400 == 0)
		{
			if(M1 > M2)
			{
				for(j = M2; j <= M1 - 1; j++)
					d = d + b[j-1];
			}
			else
			{
				for(j = M1; j <= M2 - 1; j++)
					d = d + b[j-1];
			}
		}
		else
		{
			if(M1 > M2)
			{
				for(j = M2; j <= M1 - 1; j++)
					d = d + a[j-1];
			}
			else
			{
				for(j = M1; j <= M2 - 1; j++)
					d = d + a[j-1];
			}
		}
		if(d % 7 == 0)
			cout << "YES"<< endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}