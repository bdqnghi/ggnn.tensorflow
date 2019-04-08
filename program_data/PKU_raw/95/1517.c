

int main ()
{
	char a[100],b[100];

	int i,leap=0;

	cin.getline (a,81);

	cin.getline (b,81);

	for (i=0;a[i]!='\0'||b[i]!='\0';i++)
	{
		if (a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]+32;
		
		if (b[i]>='A'&&b[i]<='Z')
			b[i]=b[i]+32;
	
		if (a[i]>b[i])
		{
			cout <<'>';leap=0;break;
		}
		if (a[i]<b[i])
		{
			cout <<'<';leap=0;break;
		}
		if (a[i]==b[i])
			leap=1;
	}
	if (leap==1)
		cout <<'=';

	return 0;
}