int main(int argc, char* argv[])
{
	char a[80],b[80];
	int i;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
	{
		if(a[i]>=97&&a[i]<=122)
		{
			a[i]=a[i]-32;
		}
		if(b[i]>=97&&b[i]<=122)
		{
			b[i]=b[i]-32;
		}
	}
	if(strcmp(a,b)==0)
	{
		printf("=\n");
	}
	else if(strcmp(a,b)>0)
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}