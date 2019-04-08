int main ()
{
	int i = 0, result[100] = {0}, num[100] = {0}, temp[100] = {0}, len;
	char N[100];
	cin >> N;
	while(N[i] != '\0')
	{
		num[i] = N[i] - '0';
		i++;
	}
	len = i;
	if (len == 1)
	{
		cout << "0" << endl << N[0];
	}
	else
	{
		result[0] = (num[0] * 10 + num[1]) / 13;
		temp[1] = (num[0] * 10 + num[1]) % 13;
		if (result[0] != 0 || len <= 2)
			cout << result[0];
		for(i = 1; i <= len - 2; i++)
		{
			result[i] = (temp[i] * 10 + num[i+1]) / 13;
			cout << result[i];
			temp[i+1] = (temp[i] * 10 + num[i+1]) % 13;
		}
		cout << endl;
		cout << temp[i] << endl;
	}
	return 0;
}