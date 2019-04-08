
char s[100];
char a[100];
char b[100];
int len1,len2,len3;
int i;
int check(int place);
void output(void);
int main(void)
{
	gets(s);
	gets(a);
	gets(b);
	len1=strlen(s);
	len2=strlen(a);
	len3=strlen(b);
    for(i=0;i<len1;i++)
	{
		if(check(i))
		{
			output();
			i+=len2-1;
		}
		else
		{
			printf("%c",s[i]);
		}
	}
}
int check(int place)
{
	int num=0;
	int ctr=0;
	if(place>0&&s[place-1]!=' ')
		return 0;
	for(ctr=0;ctr<len2;ctr++)
	{
		if(s[place+ctr]==a[ctr])
			num++;
	}
	if(num==len2)
		return 1;
	else
		return 0;
}
void output(void)
{
	int ctr1;
	for(ctr1=0;ctr1<len3;ctr1++)
	{
		printf("%c",b[ctr1]);
	}
}