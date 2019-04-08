
int main()
{
	int len,i;
	char a[101],*p = NULL;
	cin.getline(a,101);
	len = strlen(a);
	for (i = 0,p = a; i < len - 1; i++,p++)
		cout << (char) (*p + *(p + 1));
	cout << (char) (a[len - 1] + a[0]) << endl;
return 0;
}