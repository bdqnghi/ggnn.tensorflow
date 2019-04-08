void main()
{
	int i,j,k;
	char a[100]={""},b[100]={""},c[100]={""},d[100]={""};
	gets(c);
	gets(a);
	gets(b);
	for(i=0;;)
	{
		for(j=0;c[i]!=' '&&c[i]!='\0';i++,j++)
			d[j]=c[i];
		d[j]='\0';
		if(strcmp(d,a)==0)
			printf("%s",b);
		else for(k=0;k<j;k++)
				printf("%c",d[k]);
		if(c[i]!='\0') printf(" ");
		else break;
		i++;
	}
}
		

