int check(char a[], int point, int lenth)
{
	if(point > 0 && a[point - 1] == a[point + lenth])
		return 1;
	else return 0;
}
int main()
{
	char code[500];
	int flag[500];
	int i, j, lenth, outlet;
	for(i = 0; i < 500; i++)
		flag[i] = 1;
	cin >> code;
	for(outlet = 0, lenth = 0; outlet < strlen(code); lenth += 2)
	{
		for(i = 0; i < strlen(code); i++)
		{
			if(flag[i])
			{
				if(check(code, i, lenth))
				{
					for(j = i - 1; j <= i + lenth; j++)
					{
						cout << code[j];
						flag[i - 1] = 1;
					}
					cout << endl;
				}
				else  outlet++;
					flag[i] = 0;
			}
		}
	}
	return 0;
}