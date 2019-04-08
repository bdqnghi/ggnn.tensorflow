
int main(int argc, char* argv[])
{
    char a[101];
	int i=0;
	for (i=0;i<101;i++)
	{
		a[i]=='\0';
	}
	gets(a);
    i=0;
	while (a[i]!='\0')
	{
		if (!(a[i]==' ' && a[i+1]==' '))
		{
			printf("%c",a[i]);
		}
	    i++;
	}
	return 0;
}
