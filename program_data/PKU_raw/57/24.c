void main()
{
	char string[ 50][20],str[ 50][20],c;
	int i,n,d,k;
	scanf("%d",&n);
	for (i=0;i<=n;i++)
		gets(string[i]);
	for (i=0;i<=n;i++)
	{
		d=strlen (string[i]);
		if ((c=string[i][d-1])=='r'||(c=string[i][d-1])=='y')
		{
		 for (k=0;k<d-2;k++)
			 str[i][k]=string[i][k];
		 str[i][d-2]='\0';
		}
		else

	if ((c=string[i][d-1])=='g')
	{
 for (k=0;k<d-3;k++)
			 str[i][k]=string[i][k];
 str[i][d-3]='\0';
	}
	else
	{
 for (k=0;k<d ;k++)
			 str[i][k]=string[i][k];
 str[i][d ]='\0';
	}
	}

	for (i=0;i<=n;i++)
		puts(str[i]);
}
