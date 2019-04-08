


void Sum(int *a1, int *a2)
{
	int i;
	for(i = 0; i < 250; i++)
	{
		a1[i] += a2[i];
		if(a1[i] >= 10)
		{
			a1[i + 1]++;
			a1[i] -= 10;
		}
	}
	for(i = 250; i >= 0; i--)
		if(a1[i] != 0)
			break;
	if(i < 0) cout << 0 << endl;
	else
	{
		for( ; i >= 0; i--)
			cout << a1[i];
		cout << endl;
	}
}
int main()
{
	char a1[300], a2[300];
	int b1[300], b2[300], len1, len2;
	memset(b1, 0, sizeof(b1));
	memset(b2, 0, sizeof(b2));
	int i, j;
	cin.getline(a1, 250);
	len1 = strlen(a1);
	cin.getline(a2, 250);
	len2 = strlen(a2);
	j = 0;
	for(i = len1 - 1; i >= 0; i--)
		b1[j++] = a1[i] - '0';
	j = 0;
	for(i = len2 - 1; i >= 0; i--)
		b2[j++] = a2[i] - '0';
	Sum(b1, b2);
	return 0;
}