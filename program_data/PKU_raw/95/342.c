int main()
{
	int i,k;
	char a[100];
	gets(a);
	char b[100];
	gets(b);
	for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
	{
		if(a[i]<='Z'&&a[i]>='A')a[i]=a[i]+32;
        if(b[i]<='Z'&&b[i]>='A')b[i]=b[i]+32;
	}
	k=strcmp(a,b);
    if(k>0)printf("%c",'>');
	if(k<0)printf("%c",'<');
	if(k==0)printf("%c",'=');
    return 0;
}