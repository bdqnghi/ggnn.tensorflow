int main()
{
	char s[100];
	int m = 0, n, a[100] = {0}, b = 0, i;
	cin >> s;
	n = strlen(s);
	if(n == 1)
	{
		m = s[0] - '0';
		cout << "0" << endl << m << endl;
	}
	else
	{
	  if(n == 2)
	  {
		  m = (s[0] - '0') * 10 + s[1] - '0';
		  b = m / 13;
		  m = m % 13;
		  cout << b << endl << m << endl;
	  }
	  else
	  {
		m = s[0] - '0';
	   for(i = 1; i < n; i++)
	   {
		   m = m * 10 +  s[i] - '0';
		   b = m / 13;
		   m = m % 13;
		   a[i - 1] = b;
	   }
	   n --;
	   if(a[0] == 0)
		   i = 1;
	   else i = 0;
	   for(; i < n; i++)
	   {
		   cout << a[i];
	   }
	   cout << endl << m;
	  }
	}
	return 0;
}
