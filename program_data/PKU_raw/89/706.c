int main ()
{
	int n, know[10000] = {0}, known[10000] = {0},
	    flag, man, man0;
	cin >> n;
	do
	{
		cin >> man >> man0;
		if (man == 0 && man0 == 0) break;
		++know[man];
		++known[man0];
	} while(1);
	flag = 0;
	for (int i = 0; i < n; i++)
		if (know[i] == 0 && known != 0)
		{
			cout << i << endl;
			++flag;
		}
	if (flag == 0)
		cout << "NOT FOUND" << endl;
	getchar();
	getchar();
	return 0;
}