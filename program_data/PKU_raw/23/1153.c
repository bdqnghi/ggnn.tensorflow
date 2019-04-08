void main()
{
	int i,j=0,k=0,l;
	char str[101],a[100][15];
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
			a[j][k]=str[i];
			k++;
		}
		else 
		{
			a[j][k]='\0';
			k=0;
			j++;
		}
	}
	a[j][k]='\0';
	for(l=j;l>=1;l--)
	{
		printf("%s ",a[l]);
	}
	printf("%s\n",a[0]);
}
