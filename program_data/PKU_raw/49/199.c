char str[500];
int length;
int check(int start,int len);
int ctr1,ctr2,ctr3;
int main(void)
{
	gets(str);
	length=strlen(str);
	for(ctr1=2;ctr1<=length;ctr1+=2)
	{
		for(ctr2=0;ctr2<=length-ctr1;ctr2++)
		{
			check(ctr2,ctr1);
		}
	}
	return 0;
}
int check(int start,int len)
{
	char a[500];
	char b[500];
	int i;
    for(i=0;i<500;i++)
	{
		a[i]='\0';
		b[i]='\0';
	}
	for(i=0;i<len;i++)
	{
		a[i]=str[i+start];
		b[i]=str[len-i+start-1];
	}
	if(strcmp(a,b)==0)
	{
		puts(a);
		return 1;
	}
	else
		return 0;
}
