int main ()
{
	char plus1[600] = {'\0'}, plus2[600] = {'\0'}, out[600] = {'\0'};
	out[0] = '0';
	cin.getline(plus1, 600, '\n');
	cin.getline(plus2, 600, '\n');
	int i = 0, mark1 = strlen(plus1), mark2 = strlen(plus2), len = 0, flag = 0;
	if(strlen(plus1) > strlen(plus2))
	{
		len = strlen(plus1);
		for(i = strlen(plus1) -	1; i >= mark1 - mark2; i --)
			plus2[i] = plus2[i - mark1 + mark2];
		for(i = mark1 - mark2 - 1; i >= 0; i --)
			plus2[i] = '*';
	}
	else if(strlen(plus2) > strlen(plus1))
	{
		len = strlen(plus2);
		for(i = strlen(plus2) -	1; i >= mark2 - mark1; i --)
			plus1[i] = plus1[i - mark2 + mark1];
		for(i = mark2 - mark1 - 1; i >= 0; i --)
			plus1[i] = '*';
	}
	else 
		len = strlen(plus1);
	for(i = 0; i < len; i ++)
		if(plus1[i] == '*' || plus2[i] == '*')
			out[i + 1] = plus1[i] + plus2[i] - '*';
		else
			out[i + 1] = plus1[i] + plus2[i] - '0';
	for(i = len; i > 0; i --)
		if(out[i] > '9')
		{
			out[i] = out[i] - 10;
			out[i - 1] ++;
		}
	for(i = 0; i <= len; i ++)
		if(out[i] != '0')
		{
			flag = i;
			break;
		}
	if(i == len + 1)
		cout << '0';
	else
		for(i = flag; i <= len; i ++)
			cout << out[i];
	return 0;
}