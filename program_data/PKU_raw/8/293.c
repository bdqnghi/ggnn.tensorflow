

int a[100], b[100], c[100],n,m,i,j,k;

void get_array();
void sort_array();
void combine_array();
void print_array();

int main ()
{
	get_array();

	sort_array();

	combine_array();

	print_array();

	return 0;
}

void get_array()
{
	cin >> n >> m;
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < m; i++)
		cin >> b[i];
}
void sort_array()
{
	int temp = 0;
	for (i = 0; i < n-1; i++)
		for (j = 0; j < n-1-i; j++)
		{
			if (a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	for (i = 0; i < m-1; i++)
		for (j = 0; j < m-1-i; j++)
		{
			if (b[j] > b[j+1])
			{
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}

}
void combine_array()
{
	for (i = 0; i < n; i++)
	{
		c[i] = a[i];
	}
	for (i = 0; i < m; i++)
	{
		c[i+n] = b[i];
	}
}
void print_array()
{
	cout << c[0];
	for (i = 1; i < m+n; i++)
		cout <<' '<< c[i];
	cout << endl;

}