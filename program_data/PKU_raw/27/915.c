int main()
{
	int n;
	cin >> n;
	float formal[n][3];
	for (int i = 0; i < n; i++)
		cin >> formal[i][0] >> formal[i][1] >> formal[i][2];
	double x1,x2,delta,unfi;
	for (int i = 0; i < n; i++)
	{
		delta = formal[i][1] * formal[i][1] - (4 * formal[i][0] * formal[i][2]);
		if (delta > 0)
		{
			x1 = (-formal[i][1] + sqrt(delta)) / (2 * formal[i][0]);
			x2 = (-formal[i][1] - sqrt(delta)) / (2 * formal[i][0]);
			if (x1 == -0)
				x1 = 0;
			else if (x2== -0)
				x2 = 0;
			cout<<fixed;
			cout << "x1=" << setprecision(5) << x1 << ";x2=" << x2 << endl;
		}
		else if (delta == 0)
		{
			x1 = -formal[i][1] / (2 * formal[i][0]);
			if (x1 == -0)
				x1 = 0;
			cout<<fixed;
			cout << "x1=x2=" << setprecision(5) << x1<<endl;
		}
		else
		{
			unfi = abs(sqrt(-delta) / (2 * formal[i][0]));
			x1 = -formal[i][1] / (2 * formal[i][0]);
			if (x1 == -0)
				x1 = 0;
			cout << fixed;
			cout << setprecision(5) << "x1=" << x1 << "+" << unfi << "i;x2="
			<< x1 << "-" << unfi << "i" <<endl;
		}
	}
	return 0;
}