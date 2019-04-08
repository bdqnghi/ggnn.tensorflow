
int main()
{
	int num;
	cin >> num;
	int flag1 = 0, flag2 = 0, flag3 = 0;
	
	if(num % 3 == 0)
		flag1 = 1;
	if(num % 5 == 0)
		flag2 = 1;
	if(num % 7 == 0)
		flag3 = 1;

	if(flag1 == 1 && flag2 == 1 && flag3 == 1)
		cout << "3 5 7" <<endl;
	if(flag1 == 1 && flag2 == 1 && flag3 == 0)
		cout << "3 5" <<endl;
	if(flag1 == 1 && flag2 == 0 && flag3 == 1)
		cout << "3 7" <<endl;
	if(flag1 == 0 && flag2 == 1 && flag3 == 1)
		cout << "5 7" <<endl;
	if(flag1 == 1 && flag2 == 0 && flag3 == 0)
		cout << 3 <<endl;
	if(flag1 == 0 && flag2 == 1 && flag3 == 0)
		cout << 5 <<endl;
	if(flag1 == 0 && flag2 == 0 && flag3 == 1)
		cout << 7 <<endl;
	if(flag1 == 0 && flag2 == 0 && flag3 == 0)
		cout << 'n' << endl;
	return 0;
}
