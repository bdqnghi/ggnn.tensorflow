

int main()
{
	int i, l1, l2, j = 251, up = 0, m;
	char a[251], a2[252];
	char b[251], b2[252];
	char result[252]; 
	m = 0;
	up = 0;
		cin >> a;
		cin >> b;
		l1 = strlen(a);
		l2 = strlen(b);
		for (i = 0; i < 251; i++)
		{
			a2[i] = '0'; 
			b2[i] = '0'; 
			result[i] = '0';
		}
		j = 250;
		for(i = l1 - 1; i >= 0; i--)
		{
			a2[j] = a[i];
			j--;
		}
		j = 250;
		for(i = l2 - 1; i >= 0; i--)
		{
			b2[j] = b[i];
			j--;
		}
		b2[251] = '\0'; 
		a2[251] = '\0'; 
		result[251] = '\0';
		for (i = 250; i >=0; i --)
		{
			m =  (up + ((a2[i] - '0') +(b2[i] - '0')))% 10;
			result[i] = m + '0'; 
			up =(up +(a2[i] - '0') +(b2[i] - '0')) / 10;
		}
		for (i = 0; i < 250; i++)
		{
			if (result[i] != '0')
			{
				break;
			}
		} 
		cout << result+ i;
		cout <<endl;
	return 0;
} 