int main()
{
    int n, date[100], effe[100], i;
	double percent[100];
	cin >> n;
	cin >> date[1] >> effe[1];
	percent[1] = (double) effe[1] / date[1];
	for (i = 2; i <= n; i++)
	{
	    cin >> date[i] >> effe[i];
		percent[i] = (double) effe[i] / date[i];
		if (percent[i] - percent[1] > 0.05)
		{
		    cout << "better" << endl;
		}
		else if (percent[1] - percent[i] > 0.05)
		{
		    cout << "worse" << endl;
		}
		else
		{
		    cout << "same" << endl;
		}
	}
	return 0;
}