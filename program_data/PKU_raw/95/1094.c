
main()
{
	char a[80],b[80];
	int i,n;
	gets(a);
	gets(b);
	n=strlen(a);
	for (i=0;i<n;i++)
	{
		if (a[i]>64&&a[i]<91) a[i]+=32;
		if (b[i]>64&&b[i]<91) b[i]+=32;
	}
	switch (strcmp(a,b))
	{
	case 1:putchar('>');break;
	case 0:putchar('=');break;
	case -1:putchar('<');
	}

}
