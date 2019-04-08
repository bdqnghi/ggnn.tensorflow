
int main()
{
	char a[101], b[101];
	int i;
	cin.getline(a,101);
	int l = strlen(a);
	for (i = 0; i < l - 1; i++)
		b[i] = a[i] + a[i + 1];
	b[l - 1] = a[l - 1] + a[0]; 
	for (i = 0; i < l - 1; i++)
		cout << b[i];
	cout << b[l - 1] << endl;
	return 0;


}

