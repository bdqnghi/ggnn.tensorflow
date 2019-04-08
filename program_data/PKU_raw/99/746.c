//
// ????4.cpp ?????
// ?????? 1200012943
// ??:2012.9.29
//
int main()
{
	int n;  //??n?????
	float x1 = 0, x2 = 0, x3 = 0, x4 = 0;  //??x1 x2 x3 x4??????
         int a[100];
         cin >> n;  //??n
         for(int i = 0; i < n; i++)
	{
		cin >> a[i];  //??an
		if (a[i] <= 18)
			x1 = x1 + 1;
		else if (a[i] <= 35)
			x2 = x2 + 1;
		     else if (a[i] <= 60)
			     x3 = x3 + 1;
		          else
			          x4 = x4 + 1;
	} 
	x1 = 100 * x1 / n;  //?????
	x2 = 100 * x2 / n;
	x3 = 100 * x3 / n;
	x4 = 100 * x4 / n;
	cout << fixed;
	cout << "1-18: " << setprecision(2) << x1 << "%" << endl;  //?????
	cout << "19-35: " << setprecision(2) << x2 << "%" << endl;
	cout << "36-60: " << setprecision(2) << x3 << "%" << endl;
	cout << "60??: " << setprecision(2) << x4 << "%" << endl;
	return 0;
}