//1200012979
int look(int);
int main()
{
	int n, a, count=0;
	cin >> n;
	while(count < n)
	{
		count++;
		cin >> a;
        cout << look(a)<< endl;
	}
	return 0;
}

int look(int a)
{
	if(a < 3)
		return 1;
	else
	return look(a-1)+look(a-2);
}