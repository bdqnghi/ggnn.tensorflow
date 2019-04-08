/*
??????????
??????
?????2011.12.7
*/
void print(int*, int*, int);
int main()
{
	int i, j, n, a[10000] = {0}, b[10000] = {0}, *p, *q;
	cin >> n;
	while(cin >> i >> j)
	{
		if(i == 0 && j == 0)
		{
			break;
		}
		a[i] = a[i] + 1;
		b[j] = b[j] + 1;
	}
	p = a;
	q = b;
	print(p, q, n);
	return 0;
}

void print(int a[], int b[], int n)
{
	int i, flag = 0;
	for(i = 0 ; i < n ; i++)
	{
		if(a[i] == 0 && b[i] >= n - 1)
		{
			cout << i << endl;
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		cout << "NOT FOUND" << endl;
	}
	return;
}
	