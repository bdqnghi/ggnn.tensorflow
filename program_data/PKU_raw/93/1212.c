
int flag;

void out_put(int num)
{
	++flag;
	if (flag != 1) cout << " ";
	cout << num;
	return;
}

int main()
{
	int n;
	flag = 0;
	cin >> n;
	if (n % 3 == 0) out_put(3);
	if (n % 5 == 0) out_put(5);
	if (n % 7 == 0) out_put(7);
	if (flag == 0) cout << "n";
	return 0;
}
