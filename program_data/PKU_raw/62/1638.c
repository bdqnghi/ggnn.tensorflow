

int main ()
{
	int i=0;

	char a[201],b[201];

	cin.getline (a,200);

	char *p;

	for (p=a;*p!='\0';p++)
	{
		if (*p!=' ')
		{
			b[i]=*p;
			i++;
		}
		if (*p==' ')
		{
			b[i]=' ';
			i++;
			for (;*p!='\0';p++)
			{
				if (*p!=' ')
				{
					b[i]=*p;
					i++;
					break;
				}
			}
		}
	}
	b[i]='\0';
	cout <<b<<endl;

	return 0;
}