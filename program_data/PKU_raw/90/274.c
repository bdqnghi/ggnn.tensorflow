int placeMethod(int a, int b);
int main()
{
	int n, a, b, num;
	cin >> n;
	while(n--)
	{
		cin >> a >> b;
		num = placeMethod(a, b);
		cout << num << endl;
	}
	return 0;
}
int placeMethod(int a, int b)
{
	int sum;
	if(a==0)
		return 1;
	if(b==1)
		return 1;
	if(a<b)
		return placeMethod(a, b-1);
	else
		return  placeMethod(a-b,b) + placeMethod(a, b-1);

}