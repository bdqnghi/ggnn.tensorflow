char plus1[SIZE + 10] = {'\0'};
char plus2[SIZE + 10] = {'\0'};
int p1[SIZE + 10] = {0};
int p2[SIZE + 10] = {0};
int result[SIZE + 10] = {0};
int main ()
{
	int i = 0, end = -1;
	cin >> plus1 >> plus2;
	for(i = strlen(plus1) - 1; i >=0; i --)
		p1[strlen(plus1) - 1 - i] = plus1[i] - '0';
	for(i = strlen(plus2) - 1; i >=0; i --)
		p2[strlen(plus2) - 1 - i] = plus2[i] - '0';
	for(i = 0; i < SIZE + 5; i ++)
	{
		result[i] = result[i] + p1[i] + p2[i];
		if(result[i] >= 10)
		{
			result[i + 1] ++;
			result[i] = result[i] - 10;
		}
		if(result[i])
			end = i;
	}
	if(end == -1)
		cout << 0 << endl;
	else
		for(i = end; i >= 0; i --)
			cout << result[i];
	return 0;
}
