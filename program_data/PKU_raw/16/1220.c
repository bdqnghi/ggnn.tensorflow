int main()
{
	char a[1000];
	cin.getline (a,100);
	int i;
	int l=strlen(a);
	for (i=l-1;i>=0;i--)
		cout<<a[i];
	cout<<endl;
}