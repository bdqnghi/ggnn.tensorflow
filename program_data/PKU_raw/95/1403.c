int main ()
{
	char a[80],b[80],i;
	gets(a);
	gets(b);
    for(i=0;(a[i]!='\0')||(b[i]!='\0');i++)
	{
		if((a[i]>='A')&&(a[i]<='Z'))
			a[i]=a[i]-'A'+'a';
		if((b[i]>='A')&&(b[i]<='Z'))
			b[i]=b[i]-'A'+'a';
	}
	i=0;
	while((a[i]==b[i])&&(a[i]!='\0'))
		i++;
	if((a[i]=='\0')&&(b[i]=='\0'))
     printf("=\n");
	else if(a[i]>b[i]) printf(">\n");
		else printf("<\n");
}
