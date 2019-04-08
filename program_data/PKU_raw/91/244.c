int main()
{
	char s[101];
	cin.getline(s,101);
	int length=strlen(s);
	char *p=s;
	for(int i=1;i<length;i++)
	{
		cout<<(char)(*p+*(p+1));
		p++;
	}
	cout<<(char)(*p+*(p-length+1))<<endl;
	return 0;
}
