int main ()
{
	struct
	{
		char ch;
		int num;
	}student[100];//?????????????????
	int sum = 0;
	char temp;
	while (true)//???????????
	{
		cin.get(temp);
		if ( temp == '\n' ) break;
		student[sum].ch = temp;
		student[sum].num = sum;
		sum ++;
	}
	char boy, girl;//?????????????????
	boy = student[0].ch;
	girl = student[sum-1].ch;
	for ( int i = 0; i < sum/2; i ++ )//????????????
		for ( int j = 0; j < sum - 1; j ++ )
		{
			int k = j + 1;
			while( student[k].ch == 0 ) k ++;
			if ( student[j].ch == boy && student[k].ch == girl )
			{
				cout << student[j].num << " " << student[k].num << endl;
				student[j].ch = 0;
				student[k].ch = 0;
				break;
			}
		}
	return 0;
}