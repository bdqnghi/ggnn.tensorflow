
void body()
{
	char str[11];
	char substr[4];
	char c;
	int i=0,k,s=0;
	char * p;
	scanf("%s %s",str,substr);
	c=*(str+strlen(str)-1);
	k=strlen(str);
	for(i=strlen(str)-1;i>-1;i--)
	{
		if(str[i]>=c)
		{
			k=i+1;
			c=*(str+i);
		}
	}
	p=str;
	if(strlen(str)>=11 || strlen(substr)>=4) return; 
	for(i=0;i<k;i++) 
	{
		printf("%c",*(p+i));
	}
	printf("%s",substr);
	printf("%s\n",p+i);
	body();
}

void main()
{
	body();
}