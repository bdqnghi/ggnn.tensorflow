/*
 * file    homework 14_2
 * author  ??
 * date    2010-1-1
 * description
           ???????????
*/



int Match(int n, char a[], char boy, char girl);

int main()
{
	int len;
	char a[100];
	char boy, girl;
	cin >> a;
	len = strlen(a);
	boy = a[0];
	girl = a[len - 1];
    Match(0, a, boy, girl);

	return 0;
}


int Match(int n, char a[], char boy, char girl)
{
	int m;
	if(a[n] == girl)
		return n;
	m = Match(n + 1, a, boy, girl);
	cout << n << " " << m << endl;
	if (a[m + 1] != '\0')
		return Match(m + 1, a, boy, girl);
	else
		return 0;

}
