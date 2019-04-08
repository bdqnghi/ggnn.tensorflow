int main()
{
	int a, b, sum=0, i, l, p[100];
	char s[100],q[100];
	cin >> a;
	scanf("%s",s);
	cin >> b;
	l = strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]>='a')
			sum = sum * a + (s[i] - 87);
		else
		{
			if(s[i]>='A'&&s[i]<='Z')
				sum = sum * a + (s[i] - 55);
			else
				sum = sum * a + (s[i] - 48);
		}
	}
	if(sum==0)
		cout <<"0";
	else
	{
		for(i=0;sum;i++)
		{
			p[i] = sum % b;
			if(p[i]<10)
				q[i] = p[i] + 48;
			else
				q[i] = p[i] + 55;
			sum  = sum / b;
		}
		for(i--;i>=0;i--)
			cout << q[i];
	}
	return 0;	
}