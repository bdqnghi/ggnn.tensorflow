
int main(int argc, char* argv[])
{
	char a[80],b[80];
	char c[80],d[80];
	int i;
	gets(a);
	gets(b);

	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z'){c[i]=a[i]-32;}
		else {c[i]=a[i];}
	}
	c[i]='\0';

    for(i=0;b[i]!='\0';i++)
	{
		if(b[i]>='a'&&b[i]<='z'){d[i]=b[i]-32;}
		else {d[i]=b[i];}
	}
	d[i]='\0';

	if(strcmp(c,d)==0)
	{
		printf("=");
	}
	else
	{
		if(strcmp(c,d)>0)
		{
			printf(">");
		}
		else printf("<");
	}


	return 0;
}
