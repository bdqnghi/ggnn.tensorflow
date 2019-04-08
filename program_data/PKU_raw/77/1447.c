char a[1000];
int match(char,char);
int main()
{
	char b, g; int i;
	cin >> a; 
	b= a[0];
	for (i = 0; i <= 999; i++)
		if(a[i] != b)
		{
			g = a[i];
			break;
		}
	match( b, g);
	return 0;
	}

int match(char b, char g)
{
	int i, j;
	for ( i = 0; a[i] != '\0'; i++)
		if(a[i] == g)
			break;
	if(a[i]=='\0')
		return 0;
	for ( j=i; j>=0; j--)
		if(a[j] == b)
		{
			cout<<j<<' '<<i<<endl;
				break;
		}
	a[j]='*'; 
	a[i]='*';
	match( b,g);
}