int main()
{
	char a[100] , b , g;
	int i,ii;
	cin >> a;
	b = a[0];
	g = a[strlen(a) - 1];
	for (ii = 0;ii < strlen(a);ii++)
	{
		for (i = ii;i >= 0;i--)
		{
			if((a[ii] == g)&&(a[i] == b))
			{
				cout << i << " " <<ii <<endl;
				a[i] = ' ';
				a[ii] = ' ';
			}
		}
	}
	return 0;
}