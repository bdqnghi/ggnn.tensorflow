void main()
{
	int n;
	char STR[103]={" "},str[103]={" "},str1[103]={" "};
	char *p,*q,*s;
	gets(STR);
	strcat(STR,str);
	strcat(str,STR);
	n=strlen(str);
	s=str1;
	for(p=str+n-2;p>=str;p--)
	{
		if(*p==' ')
		{
			q=p+1;
			do
			{
				*s=*q;
				s++;
				q++;
			}
			while(*q!=' ');
			*s=' ';
			s++;
		}
		else
			continue;
	}
	*(s-1)='\0';
	printf("%s",str1);
}
			

