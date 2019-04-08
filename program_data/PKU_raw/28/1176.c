

int main()
{
	int i,s=0,k=1,flag=0;
	char str[10000];
	gets(str);
	for (i=0;i<=strlen(str)-1;i++)
	{
		if (str[i]!=' ') {s++;flag=0;}
		if (str[i]==' ' && flag==0) {printf("%d,",s);s=0;flag=1;}
	}
	printf("%d",s);
}