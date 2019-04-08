void main()
{
	char s[101],*string[50],*p=s;
	int c=0,i;
	gets(s);
	string[c++]=&s[0];
	for(i=0;*p!='\0';i++,p++)
		if(*p==' ')
		{
			*p='\0';
			string[c++]=p+1;
		}
	c--;
	for(;c>=0;c--)
	{
		printf("%s",string[c]);
		if(c!=0) printf(" ");
	}
}