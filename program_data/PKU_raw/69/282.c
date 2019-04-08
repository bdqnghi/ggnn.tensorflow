int larger(int a ,int b)
{
	if(a > b)
		return a;
	return b;
}
int main()
{
	char IN_1[MAX] = {0};
	char IN_2[MAX] = {0};
	cin.getline(IN_1,MAX);
	cin.getline(IN_2,MAX);
	int input_1[MAX] = {0};
	int input_2[MAX] = {0};
	int length_1 = strlen(IN_1);
	int length_2 = strlen(IN_2);
	for(int i = 0; i < length_1 ;i++)
		input_1[length_1 - i -1] = (int)(IN_1[i] - '0');
	for(int i = 0; i < length_2 ;i++)
		input_2[length_2 - i -1] = (int)(IN_2[i] - '0');
	int output[MAX] = {0};
	int i = 0;
	for( ; i < larger(length_1 , length_2); i++)
	{
		int temp = input_1[i] + input_2[i] + output[i];
		output[i+1] += temp /10;
		output[i] = temp % 10;
	}
	while(output[i] == 0)
		i--;
	if(i < 0)
		cout<<0;
	for(;i >= 0;i--)
	{
		cout<<output[i];
	}
	cout<<endl;
	return 0;
}
