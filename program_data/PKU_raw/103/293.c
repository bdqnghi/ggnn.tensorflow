
int main ()
{
	char text[1000];
	cin >> text;
	int index[40] = {0}, count[40] = {0}, temp = 1, len, sort = 0;
	len = strlen(text);
	int i,j,k;

	for (i = 1; i < len; i++)
	{
		if (toupper(text[i]) != toupper(text[i-1]))
		{
			count[sort] = temp;
			sort++;
			index[sort] = i;
			temp = 1;
		}
		else
			temp ++;
	}
	count[sort] = temp;

	for (i = 0; i <= sort; i++)
	{
		cout << "(" << (char)toupper (text[index[i]]) << "," << count[i] << ")";
	}
	cout << endl;

	return 0;
}