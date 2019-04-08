int main()
{
	char *str,*p;
	int n,k,i;
	str=(char*)malloc(100*sizeof(char));
	gets(str);
	p=str;
	n=strlen(str);
	k=n;
	for(i=0;i<n;i++)
	{
		if(*(p+i)!=' ')
		{
			printf("%c",*(p+i));
		}
		if(*(p+i)==' '&&*(p+i+1)!=' ')
		{
			printf(" ");
		}
	}
	return 0;
}
			
