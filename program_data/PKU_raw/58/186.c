/**
* @file 1000010424_4.cpp
* @author ???
* @date 2010?11?20
* @description
* ??????: ?????C????????
*/



int main()
{
	int n, i, j;										//?????????????
	char input[90];										//????????
	int sum, len;										//??????????????

	cin >> n;
	cin.ignore();

	for(i = 1; i <= n; i++)
	{
		cin.get(input, 90);							//??90??????????~?
		getchar();
		len = strlen(input);							//?????
		sum = 0;

		if(input[0] == '_' || (input[0] <= 'z' && input[0] >= 'a') || (input[0] <= 'Z' && input[0] >= 'A'))
		{
			sum++;

			for(j = 1; j < len; j++)
				if(input[j] == '_' || (input[j] <= 'z' && input[j] >= 'a') || (input[j] <= 'Z' && input[j] >= 'A')
					 || (input[j] >= '0' && input[j] <= '9'))
					 sum++;
				else
					break;
		}

		if(sum == len)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}

	return 0;
}