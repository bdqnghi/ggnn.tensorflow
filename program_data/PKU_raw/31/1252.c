void main()
{
	int i=0, n=0;
	char a[500][100];
	for(i=0; i<500; i++)
	{
		gets(a[i]);
		//getchar();
		if(a[i][0]=='e') break;
	}
	n=i-1;
	for(i=n; i>=0; i--)
	{
		printf("%s\n",a[i]);
	}
}