int main()
{
	char a[280],b[280],c[280];
	char res[280];
	char t[280];
	int i,j;
	int check=0;
	scanf("%s %s %s",a,b,c);
	
	for(i=0;i<strlen(a);i++)
	{
		if(check==1)break;
		if(b[0]==a[i])
		{
			for(j=0;j<280;j++)t[j]='\0';
			for(j=0;j<280;j++)res[j]='\0';
			for(j=i;j<i+strlen(b);j++)t[j-i]=a[j];
			if(strcmp(b,t)==0)
			{
				check=1;
				for(j=0;j<i;j++)res[j]=a[j];
				for(j=i;j<strlen(c)+i;j++)res[j]=c[j-i];
				for(j=strlen(c)+i;j<strlen(a)+strlen(c)-strlen(b);j++)res[j]=a[j+strlen(b)-strlen(c)];
			}

		}

	}
	if(check==1)printf("%s\n",res);
	else printf("%s\n",a);
	return 0;

}