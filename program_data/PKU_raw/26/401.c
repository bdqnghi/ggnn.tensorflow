main()
{
      char a[1000];
	gets(a);
	printf("%c",a[0]);
	for(int i=1;;i++)
	{
		if ( (a[i]!=' ' || a[i-1]!=' ' )&&a[i]!='\0')
			printf("%c",a[i]);
		if(a[i]=='\0')
			break;
	}
	return 0;}
