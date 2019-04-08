/************************************
2.cpp
???Oct 19, 2011
??(11-4) ????????
?? 1100012886
************************************/

int main()
{
	int n, a[100001], i, pointer, j, k; //i?????
	cin >> n;
	for (i = 1; i <= n; i++) cin >> a[i];
	cin >> k;
	pointer = 1;
	while (pointer <= n)
	{
		while (a[pointer] == k)
		{
			for (j = pointer; j <= n; j++) a[j] = a[j+1];
			n--; //n????????????
		}
		pointer++;
	}
	for (i = 1; i < n; i++) cout << a[i] << " ";
	cout << a[n] << endl;
	return 0;
}