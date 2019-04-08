int work(char*input);
int compare(char a);
int main(int argc, char* argv[])
{
	int n=0,k=0;
	char n1[6],input[80];
           	gets(n1);
	n=atoi(n1);
	for(int i=0;i<n;i++)
	{
		gets(input);
		k=work(input);
		printf("%d\n",work(input));
	}
	return 0;
}
int work(char*input)
{
	char*p=input;
	char c='0';
	for(c='0';c<='9';c++)
	{
		if(*p==c)
			return 0;
	}
	int n=strlen(input);
	for(int i=0;i<n;i++)
	{
		if(compare(*(p+i))==0)
			return 0;
	}
	return 1;
}
int compare(char a)
{
	char c='0';
	for(c='0';c<='9';c++)
	{
		if(a==c)
			return 1;
	}
	for(c='A';c<='Z';c++)
	{
		if(a==c)
			return 1;
	}
	for(c='a';c<='z';c++)
	{
		if(a==c)
			return 1;
	}
   	if(a=='_')
	{return 1;}
	else return 0;
}