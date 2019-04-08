int main()
{
	char str[100],*p,*t,*s;
	int i,j,n;
	gets(str);
	n=strlen(str);
	for(p=str+n;p>=str;p--)
	{
		if((*p)==' ')
		{
			for(t=p+1;((*t)!=' ')&&((*t)!='\0');t++)
			{
			    printf("%c",*t);
			}
			printf(" ");
		}
			
	}
	for(s=str;((*s)!=' ')&&((*s)!='\0');s++)
		printf("%c",*s);
}