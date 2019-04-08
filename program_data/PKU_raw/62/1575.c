int  main()
{
	char s[301];
	char *p=s;
	gets(s);
	cout<<*p;
	for(int i=1;i<strlen(s);i++)
	{
		if(p[i]==' '&&p[i-1]==' ')
		continue;
		else
		cout<<p[i];
	}
	//while(1);
	return 0;
}
			
			
