int main()
{
	int i,m,n;
	char str[100],string[100]={""};
	gets(str);
	n=strlen(str);
	for(i=0;str[i]!='\0',i<n-1;i++)
	{
		if((str[i]==' ')&&(str[i+1]==' '))
	{
			for(m=i;m<n-1;m++)
     str[m]=str[m+1];
	n--;
	i=0;
	}
	}
	strncpy(string,str,n);
	printf("%s",string);
	return 0;
}
