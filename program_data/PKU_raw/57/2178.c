
void main ()
{
	int n;
	int len;	

	scanf("%d",&n);
	getchar();

	for(;n>0;n--)
	{
		char str[100];

		gets(str);
		len=strlen(str);

		if(str[len-1]=='g') str[len-3]='\0';
		else str[len-2]='\0';

		puts(str);
	}
}