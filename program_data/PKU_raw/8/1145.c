int num[2];
int a[100], b[100], c[100];
void getarray(int a[], int b[], int num[])
{
	cin >> num[0] >> num[1];
	for (int i = 0; i < num[0] ; i++)
		cin >> a[i];
	for (int i = 0 ;i < num[1] ; i++)
		cin >> b[i];
}
void sort(int a[],int b[] ,int af ,int bf)
{
	int temp;
	for (int i = 0 ; i < af - 1; i++)
	{
		for (int j = 1 ; j < af - i ; j++)
		{
			if (a[j] < a[j-1])
			{
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	for (int i = 0 ; i < bf - 1; i++)
	{
		for (int j = 1 ; j < bf - i ; j++)
		{
			if (b[j] < b[j-1])
			{
				temp = b[j];
				b[j] = b[j - 1];
				b[j - 1] = temp;
			}
		}
	}  
}
void combine(int a[],int b[], int c[], int af, int bf)
{
	for (int i = 0 ; i < af ; i++)
		c[i] = a[i];
	for (int i = af; i < af + bf ;i++)
		c[i] = b[i - af];
}
void print(int c[],int af, int bf)
{
	cout << c[0];
	for (int i = 1 ; i < af + bf ; i++)
		cout << ' ' << c[i];
}
int main()
{
	getarray(a,b,num);
	sort(a,b,num[0],num[1]);
	combine(a,b,c,num[0],num[1]);
	print(c,num[0],num[1]);
}