/*????  ??*/
int main()
{
	char a[30];
	int i;
	cin.getline(a,31);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]-'0'>=0 && a[i]-'0'<10)
			cout<<a[i];
		else if(a[i+1]-'0'>=0 && a[i+1]-'0'<10)
			cout<<endl;
	}
	return 0;
}