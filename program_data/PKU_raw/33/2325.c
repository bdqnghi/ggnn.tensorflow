int main()
{
	void hanshu();
	int n,i;
	
	scanf("%d\n",&n);

	for(i=0;i<n;i++)
		hanshu();

	return 0;

}


void hanshu()
{
	char a[300];
	char b[300];
	int z,c;

	gets(a);
	c=strlen(a);

	for(z=0;z<=c;z++)
	{
		if(a[z]=='A')
			b[z]='T';

		if(a[z]=='T')
			b[z]='A';

		if(a[z]=='C')
			b[z]='G';



		if(a[z]=='G')
			b[z]='C';

		if(a[z]=='\0' || a[z]==' ' || a[z]=='\n')
		{
			b[z]='\0';
			break;
		}
	}

	puts(b);

}

