int main()
{
	char a[500];
	int i, j, k, l, flag;
	gets(a);
	l = strlen(a);
	for (i = 1; i < l; i++)
		for (j = 0; j < l - i; j++)
		{
		   flag = 1;
		   for (k = j; k <= j + i; k++)
		       if (a[k] != a[2*j + i - k])
				   flag = 0;
		   if (flag)
		   {
			   for (k = j; k <= j + i; k++)
				  cout << a[k];
			   cout << endl;
		   }
		}
	return 0;
}