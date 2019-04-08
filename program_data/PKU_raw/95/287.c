int main()
{
	char a[100],c[100];
	gets(a);
	gets(c);
	int i,j;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]+32;
	}
	for(j=0;c[j]!='\0';j++)
	{
		if(c[j]>='A'&&c[j]<='Z')
			c[j]=c[j]+32;
	}
	if(strcmp(a,c)>0) {
		printf(">\n");
	}
	else if(strcmp(a,c)<0) {
		printf("<\n");
	}
	else {
		printf("=\n");
	}
	
	return 0;
}