char ctt[200];
int main()
{
	char a[150];
	char b[150];
	int l,i;
	gets(a);
	l=strlen(a)-1;
	for(i=0;i<=l;i++)
	{
		if(i!=l)
		{
			*(b+i)=*(a+i)+*(a+i+1);
		}
		else
		{
			*(b+i)=*(a+i)+*(a+0);
			*(b+i+1)='\0';
		}
	}
	printf("%s",b);
	return 0;
}