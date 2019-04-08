int main()
{
	int a[400];
	double sum=0;//???????????????
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
   sort(a, a + n);//??????????
 double average = sum / n;//????
   if (a[0] == a[n - 1])cout << a[0] << endl;
   else if (a[n-1] - average>average - a[0])cout << a[n-1]<<endl;
   else if (a[n-1] - average == average - a[0])cout << a[0] << ',' << a[n-1]<<endl;
   else cout << a[0] << endl;
   return 0;
}