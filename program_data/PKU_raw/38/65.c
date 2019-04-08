

int main()
{
	int k;
	cin >> k;
	for(; k >= 1; k--)
	{
		int n;
		double sum = 0;
		double data[1000 + 10];
		double *p = data;

		cin >> n;
		for(int i = 0; i < n; i++)
		{
			cin >> data[i];
			sum += data[i];
		}
		double aver = sum / n;
		double dsum = 0;
		for(p = data; p < data + n; p++)
		{
			dsum += (*p - aver) * (*p - aver);
		}
		dsum /= n;
		double s = sqrt(dsum);
		cout << fixed << setprecision(5);
		cout << s << endl;
	}
}