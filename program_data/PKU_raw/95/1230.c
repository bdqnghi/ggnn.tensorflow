

char check(char a[1000],char b[1000])
{
	
	for(int i=0;;i++)
	{
		if(a[i]>='A' && a[i]<='Z') a[i]-=('A'-'a');
		if(b[i]>='A' && b[i]<='Z') b[i]-=('A'-'a');

		
		if(a[i]>b[i]) return '>';
		if(a[i]<b[i]) return '<';

		if(a[i]=='\0') return'=';

	}

}

int main()
{
	char a[1000],b[1000];

	cin.getline(a,1000,'\n');cin.getline(b,1000,'\n');

	cout<<check(a,b);
	return 0;
}