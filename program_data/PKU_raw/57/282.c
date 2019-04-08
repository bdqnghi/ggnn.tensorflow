void main()
{
	char str[10000][100];
	int l,i,j,n,k;
	scanf("%d",&n);
	for (i=0;i<n+1;i++)
		gets(str[i]);
	for (k=0;k<n+1;k++)
	{
		l=strlen(str[k]);
		if(str[k][l-1]=='g') str[k][l-3]='\0';
		else if (str[k][l-1]=='r') str[k][l-2]='\0';
		else if (str[k][l-1]=='y') str[k][l-2]='\0';
	}
	for (j=0;j<n+1;j++)
		printf("%s\n",str[j]);
}