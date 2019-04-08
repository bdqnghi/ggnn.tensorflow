
void change(char s[],int i);

void main()
{
	char s[6];
	int i;
	gets(s);
	for(i=0;i<6;i++)
	if(s[i]=='\0')break;
	change(s,i);
}

void change(char s[],int i)
{
	if(i==1)putchar(s[0]);
	else
	{
		printf("%c",s[i-1]);
		change(s,i-1);
	}
}