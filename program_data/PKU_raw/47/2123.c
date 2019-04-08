int main ()
{
	int a[100] = {0};
	int num;
	int cur;
	int *temp = &cur;
	cin >> num;
	for ( int i = 0; i < num; i ++ )
		cin >> *(a+i);
	for ( int i = 0; i < num/2; i ++ )
	{
		*temp = *(a+i);
		*(a+i) = *(a+num-i-1);
		*(a+num-i-1) = *temp;
	}
	cout << *a;
	for ( int i = 1; i < num; i ++ )
		cout << " " << *(a+i);
	return 0;
}