//******************************************
//*???.cpp                    **
//*??: ??     1100012808              **
//*???2011.12.                       **
//******************************************
int main()  //???
{        //?????
	int n, t[100000] = {0}, i, flag = 0;
	double x, max = 0.0, sum = 0.0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> t[i];
		sum += t[i];
	}
	x = sum / n;
	for (i = 0; i < n; i++)
		if (fabs(x - t[i]) > max)
			max = fabs(x - t[i]);
	for (i = 0; i < n; i++)
		if (fabs((x - t[i]) - max ) < 1e-5)
		{
			cout << t[i] ;
			flag = 1;
			break;
		}
	for (i = 0; i < n; i++)
		if (fabs(t[i] - x - max) < 1e-5)
		{
			if (flag)
				cout << "," ;
			cout << t[i] << endl;
			break;
		}
	return 0;
} //?????
