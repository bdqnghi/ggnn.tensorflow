//********************************************************
//*  ???:1.cpp                                        *
//*  ??????    1200012948                             *
//*  ????: 2012 11 25                                *
//*  ????:????                                                                                                *
//********************************************************
int b, j;
int a[1000] = {0};   //a??????
void fjys(int);
int main()
{
	int n, i, x;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		j = 0;
		b = 0;
		memset (a, 0, sizeof(a));
		cin >> x;
		fjys (x);
		cout << b << endl;
	}
	return 0;
}

void fjys(int x)
{
	int i, n1;
	for (i = 2; i <= x; i++)   //?2????
	{
		if (x % i == 0 && i >= a[j])
		{
			a[++j] = i;
			n1 = x / i;
			if(n1 == 1)    //????
			{
				b++;    //??
			}
			else
			{
				fjys(n1);
			}
			j--;
		}
	}
	return;
}
