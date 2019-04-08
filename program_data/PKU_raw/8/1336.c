int output(int b[],int a)
{
	sort(b,b+a);
	for (int i=0;i<a-1;i++)
	cout << b[i] << ' ';
	cout << b[a-1];
}
int main()
{
	int a,b;
	cin >> a >> b;
	int input(int a,int s);
	input(a,b);
	return 0;
}
int input(int a,int s)
{
	int b[1000],c[1000];
	for (int i=0;i<a;i++)
	cin >> b[i];
	for (int i=0;i<s;i++)
	cin >> c[i];
	output(b,a);
	cout << ' ';
	output(c,s);
}