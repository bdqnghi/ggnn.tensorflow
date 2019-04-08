/*???????2?N??
 *??????
 *???2010/12/16
 *???1000010449
 */
void multiply(char *p)
{
	int num[70], i = 0, end;

	num[0] = 0;
	while (*(p + i) != '\0')
	{
		num[i + 1] = 2 * (*(p + i) - '0');
		i++;
	}

	end = i;
	for (i = end; i > 0; i--)
	{
		num[i - 1] += num[i] / 10;
		num[i] %= 10;
	}
	if (num[0] == 0)
		i = 1;
	else 
		i = 0;

	while (i <= end)
		*p++ = num[i++] + '0';
	*p = '\0';

	return;
}
int main()
{
	char result[71] = "1";
	int n, i;
	
	cin >> n;

	for (i = 0; i < n; i++)
		multiply(result);
	

	cout << result << endl;

	return 0;
}