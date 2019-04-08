
int main()
{
	int n, i, j, a[100][100], zb[100][2], k = 0, s = 0;
	int (*p)[100], (*b)[2];
	p = a;
	b = zb;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> *(*(p+i)+j);
			if (*(*(p+i)+j) == 0)
			{
				*(*(b+k)+0) = i;
				*(*(b+k)+1) = j;
				k++;
			}
		}
	}
	s = ( *( *(b + k - 1) + 0 ) - *( *(b + 0) + 0 ) - 1) * ( *( *(b + k - 1) + 1) - *(*(b + 0) + 1) - 1 );
	cout << s << endl;
	return 0;
}