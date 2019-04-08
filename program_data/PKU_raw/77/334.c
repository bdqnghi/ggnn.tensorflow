void move(char c[],int a[], int pos, int n);
void f(char c[],int n, int a[]);
int main()
{
	char c[100];
	int  i, n, a[100] = {0};
	cin >> c;
	n = strlen(c);
	for(i = 0;i < n;i++)
		a[i] = i;
	f(c,n,a);
	return 0;
}
void move(char c[], int a[], int pos, int n)
{
	int i;
	for(i = pos;i < n - 2;i++)
	{
		c[i] = c[i+2];
		a[i] = a[i+2];
	}
}
void f(char c[],int n,int a[])
{
	int i = 0;
	for(i = 0;i < n;i++)
		if(c[i] == c[0] && c[i+1] == c[n-1])
		{
			cout << a[i] <<' '<< a[i+1] <<endl;
			move(c,a,i,n);
			f(c,n-2,a);
			break;
		}
}
