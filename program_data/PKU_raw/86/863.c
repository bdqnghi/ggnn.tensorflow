

/**
* @file 1000012800_1.cpp
* @author ??
* @date 2010-11-24
* @description
* ??????:??
*/

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i ++)
	{
		int time = 0, count = 0, counter[21], num,flag = 1;
		cin >> num;
		for (int j = 0; j < num; j ++)
			cin >> counter[j];
		for (int j = 0; j < num; j ++)
		{
			time = counter[j] + 3 * (j + 1); 
			if (time - 3 >= 60)
			{
				count = counter[j] - (time -63);
				flag = 0;
				break;
			}
			else if(time >= 60)
			{
				count = counter[j];
				flag = 0;
				break;
			}
			else
				count = counter[j];
		}
		if(flag)
			count += 60 - time;
		cout << count << endl;
	}





	return 0;
}




