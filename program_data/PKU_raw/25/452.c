
int chengEr(char s[])
{
	int i, ct;
	for (ct =1000; s[ct]!=0; ct--)
	{
	}
	for (i = ct+ 1; i<=1000; i++)
	{
		if((s[i] - '0')*2 < 10)
			s[i] = (s[i] - '0')*2 + '0';
		else
		{
			s[i] = (s[i] - '0')*2-10+'0';
			if(s[i-1] == 0)
				s[i - 1] = '1';
			else
				s[i - 1]++;
		}
	}
	return 0 ;
}

int main()
{
	int n, i, ct = 0;
	char s[1001] = {0};
	s[1000] = '1';
	cin>>n;
	for(i = 0; i<n; i++)
	{
		chengEr(s);
	}
	for (ct =1000; s[ct]!=0; ct--)
	{
	}
	for (i = ct + 1; i<=1000; i++)
	{
		cout<<s[i];
	}
	return 0;
}
