/*        ??2?N??
??????           2010.12.15       */

void mul(int, int *);//??2??
void out(int *);//??

int main()
{
	int n;
	int a[40] = {1};//????????
	cin >> n;
	mul(n, a);
	return 0;
}

void mul(int n,int *a)
{
	if(n == 0)
	{
		out(a);
		return ;
	}
	int i;
	for(i = 0; i < 40; i++)
		a[i] = a[i] * 2;//???2
	for(i = 0; i < 40; i++)
		if(a[i] > 9)
		{
			a[i] = a[i] - 10;
			a[i+1]++;//??
		}
	mul(n - 1,a);//????2
}

void out(int *a)
{
	int i, fla = 1;
	for(i = 39; i >= 0; i--)
	{
		if(fla == 0)
			cout << a[i];
		if(a[i] > 0 && fla == 1)//??????
		{
			fla = 0;//????????
			cout << a[i];
		}
	}
	cout << endl;
}
