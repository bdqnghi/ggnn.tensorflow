/* title:  */
/* author: ??? */
/* time: 2011.12.31*/



int main()
{
	int n; 
	cin >> n;
	int a[101] = {0};
	int b[101] = {0};
	int i, j;
	a[100] = 1;
	for(i = 0; i < n; i++)
	{
		for(j = 100;  j > 0; j--)
		{
			a[j] = 2 * a[j] + b[j];
			if(a[j] >= 10)
			{
				a[j] = a[j] - 10;
				b[j - 1] = b[j - 1] + 1;
			}
		}
		for(j = 0; j <= 100; j++)
			b[j] = 0;
	}
	i = 0;
	while(a[i] == 0)
		i++;
	for(j = i; j <= 100; j++)
		cout << a[j];
	cout << endl;
	return 0;
}



	