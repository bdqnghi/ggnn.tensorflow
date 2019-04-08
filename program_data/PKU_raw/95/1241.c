
int main()
{
	char a[100],b[100];
	unsigned i;
	cin.getline(a,100,'\n');
	cin.getline(b,100,'\n');
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>='A' && a[i]<='Z')
			a[i]-='A'-'a';
		if(b[i]>='A' && b[i]<='Z')
			b[i]-='A'-'a';
		if(a[i]>b[i])
		{
			cout<<">";
			return 0;
		}
		else if(a[i]<b[i])
		{
			cout<<"<";
			return 0;
		}
	}
	cout<<"=";
	return 0;
}