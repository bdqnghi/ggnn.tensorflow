int main()
{
	int a, b, i, j, k, p, q, ln, lm, sum = 0;
	char n[101], m[101] = {0};
	cin >> a;
	cin >> n;
	cin >> b;
    ln = strlen(n);
    if (a <= 10)
	{
		for ( i = 0; i <= ln - 1; i++)
			sum = sum * a + n[i] - '0';
	}
	else if ( a > 10)
	{
		for ( i = 0; i <= ln - 1; i++)
		{
			
			if ((n[i] <= 'z') && (n[i] >= 'a'))
				n[i] = n[i] - 'a' + 'A';
			if ((n[i] <= 'Z') && (n[i] >= 'A'))
				sum = sum * a + n[i] + 10 - 'A';
			if ((n[i] <= '9') && (n[i] >= '0'))
				sum = sum * a + n[i] - '0';
		}
	}
	if (b <= 10)
	{
		for (i = 0; ; i++)
		{
			m[i] = sum % b + '0'  ;
			sum = sum  / b;
			if (sum == 0)
				break;
		}
		lm = strlen(m);
		for (i = lm - 1; i >= 0; i--)
			cout << m[i];
	}
	if (b > 10)
	{
		for (i = 0; ; i++)
		{
			if ((sum % b) >= 10)
			{
				m[i] = sum % b -10 + 'A';
			    sum = sum / b;
                if (sum == 0)
				    break;
			}
			else if ((sum % b) < 10)
			{
                     m[i] = sum % b + '0'  ;
			         sum = sum  / b;
                     if (sum == 0)
			             break;
			}
		}
		lm = strlen(m);
        for (i = lm - 1; i >= 0; i--)
			cout << m[i];
	}


			


	
	return 0;
}