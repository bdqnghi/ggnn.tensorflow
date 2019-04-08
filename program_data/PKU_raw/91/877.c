int main ()
{
	int i, l;
	char a[200] = {0}, out[200] = {0};
	cin.getline(a, 200);
	char *p = a;
	l = strlen(a);
	for (i = 0; i < l - 1; i++)
	{
		out[i] = (char)(*p + *(p + 1));
		*p++;
	}
	out[l - 1] = (char)(*p + a[0]);
	for (i = 0; i < l; i++)
		cout << out[i];
	return 0;
}