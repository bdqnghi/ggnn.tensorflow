
int main()
{
	
	int n, i, j, k, lenth1, lenth2,count;
	int num1[101], num2[101];
	char str1[101], str2[101];

    cin >> n;
								// ??/n
	for(count = 1; count <= n; count++)     //?????
	{
			cin.get();
		cin.getline(str1, 101);				//???????1
	
		cin.getline(str2, 101);				//?????2
	
		lenth1 = strlen(str1);				//????
		lenth2 = strlen(str2);
		memset(num1, 0, sizeof(num1));		//???????
		memset(num2, 0, sizeof(num2));
		k = 0;
		for(j = lenth1 - 1; j >= 0; j--)
		{
			num1[k++] = str1[j] -'0';       //???????????
		}
		k = 0;
        for(j = lenth2 - 1; j>=0; j--)
		{
			num2[k++] = str2[j] - '0';
		}
		for(k = 0; k < lenth1; k++)
		{
			if(num1[k] < num2[k])		   //???????????
			{
				num1[k] += 10;
				num1[k+1]--;
			}
		    num1[k] -= num2[k];
		}
		i = 100;
		while(num1[i] == 0)i--;				//?????????????
		for(; i >= 0; i--)
			cout << num1[i];
		cout << endl;
	}
	

	return 0;
}
