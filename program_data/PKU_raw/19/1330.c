int main()
{
	char str[101];
	gets(str);
	char a[101],b[101];
	scanf("%s%s",a,b);
	int n=strlen(str);
	int i,k=0,j=0;
	char c[101][101];
	for(i=0;i<n;i++)
	{
		if(str[i]==' ')
		{str[i]='\0';
	     strcpy(c[k],(str+j));
		 k++;
		 j=i+1;
		}
	}
	strcpy(c[k],(str+j));
	k++;
	for(i=0;i<k;i++)
	{
		if(i>0)
		{printf(" ");}
		if(strcmp(c[i],a)==0)
		{printf("%s",b);}
		else
		{printf("%s",c[i]);}
	}
	return 0;
}