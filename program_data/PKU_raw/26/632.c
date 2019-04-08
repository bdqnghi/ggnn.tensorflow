int main()
{
	int l, i, j;
	 char a[1001];
	 gets(a);
	 l = strlen(a);
	 for (i = l - 1; i > 0; i--)
		 if (a[i]== ' ' && a[i - 1] == ' ')
		 {
			 l--;
			 for (j = i; j < l ; j++)
				 a[j] = a[j + 1];
		 }
	for (i = 0; i < l; i++)
		cout << a[i];
	return 0;
}