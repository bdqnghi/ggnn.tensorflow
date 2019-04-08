int main(int argc, char* argv[])
{
	char a[101],t[101],b[101],c[101];
	gets(a);
    gets(b);
	gets(c);
	int i,j=0;
	for(i=0;a[i]!='\0';i++,j++)
	{
		if(a[i]!=' ')
			t[j]=a[i];
		if(a[i]==' ')
		{
			t[j]='\0';
			if(strcmp(t,b)==0)
			{
				strcpy(t,c);
			    printf("%s ",t);	
			}
			else printf("%s ",t);
			j=-1;
		}
	}
	t[j]='\0';
    if(strcmp(t,b)==0)
	{
		strcpy(t,c);
		printf("%s",t);	
	}
	else printf("%s",t);
	return 0;
}

