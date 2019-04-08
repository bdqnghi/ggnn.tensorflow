
/**
* @author ??
* @date 2010-12-1
* @description
* ??????:???? 
*/
int sum;
void calculate(int, int);


int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n;i++)
	{
		int m;
		sum  = 1;
		cin >> m;
		calculate(m, 2);
		cout << sum << endl;
	}
	return 0;
}
void calculate(int m,int begin)
{
	int i;
	int n = sqrt((double)m);
	for ( i = begin; i <= n; i++ )
	{
		if ( m % i == 0)
		{
			sum++;
			calculate(m / i,i);
		}
	}
}