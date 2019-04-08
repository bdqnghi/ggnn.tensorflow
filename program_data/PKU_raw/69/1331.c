

int main()
{
    char num1[252] = {0};
	char num2[252] = {0};
	char num3[253] = {0};
	cin>>num1>>num2;

    int maxLength;
	int num1Length = strlen(num1);
	int num2Length = strlen(num2);
    int i;

	if(num1Length >= num2Length)
		maxLength = num1Length;
	else
		maxLength = num2Length;
    
	int mark = 0;
	for(i = 0;i < maxLength || mark == 1;i++)
	{
		int a = 0;
		int b = 0;
		if(i < num1Length)
		   a = num1[num1Length -i - 1] - '0';
		if(i < num2Length)
			b = num2[num2Length -i - 1] - '0';
		int sum = a + b;
		if(mark == 1)
			sum++;
		if(sum >= 10)
		{
			sum -= 10;
			mark = 1;
		}
		else
			mark = 0;
		num3[i] = sum + '0';
	}
	int begin = maxLength;
	for(i = begin;i > 0;i--)
		if(num3[i] >= '1' && num3[i] <= '9')
			break;
		else
			begin--;

	for(i = begin;i >= 0;i--)
		cout<<num3[i];
	cout<<endl;

	
	return 0;
}