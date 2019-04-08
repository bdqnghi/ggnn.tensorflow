int main()
{
	char a[101];
	cin.getline(a,101);
	int p = strlen(a);
	for (int i=0;i<p;i++)
	{
	if(a[i]!=' ')
	cout << a[i];
	if(a[i]==' ' && a[i+1]==' ' )
	continue;
	if(a[i]==' '&&a[i+1]!=' ')
	cout << " ";
	}
	return 0;
}