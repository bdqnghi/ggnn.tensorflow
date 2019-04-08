int main()
{
	char input[100], output[100];
	int in, out, num = 0, tmp, tmp1;
	cin >> in >> input >> out;
	for (int i = 0; input[i] != '\0'; i++)
	{
		if (input[i] > 47 && input[i] < 58)
			tmp = input[i] - 48;
		else if (input[i] > 64 && input[i] < 91)
			tmp = input[i] - 55;
		else
			tmp = input[i] - 87;
		num = num * in + tmp;
	}
	int i = 0;
	for (;num != 0; i++)
	{
		tmp1 = num % out;
		if (tmp1 < 10)
			output[i] = tmp1 + 48;
		else
			output[i] = tmp1 + 55;
		num /= out;
	}
	if (i == 0)
	{
		output[i] = 48;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		cout << output[j];
	}
	cout << endl;

	return 0;
}

	


