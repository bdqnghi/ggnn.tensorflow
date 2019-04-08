int main()
{
	int weishu[5] = {-1, -1, -1, -1, -1}, num, i = 0;
	cin >> num;
	do{
		weishu[i] = num % 10;
		num = num / 10;
		i++;
	}while(num > 0);
	for (i = 0; i < 5; i++)
		if (weishu[i] != -1)
			cout << weishu[i];
	return 0;
}