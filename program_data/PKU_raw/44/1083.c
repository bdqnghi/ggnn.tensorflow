void min(char a[1000])
{
	char b[1000]={'\0'},c[1000]={'\0'};
	int i=0,j;
	if(a[0]!='-')
	{
		j=0;
	for(i=0;i<strlen(a);i++)
	b[strlen(a)-1-i]=a[i];	
    for(i=0;i<strlen(b);i++)
		if(b[i]!='0')
		{j=i;break;}
		if(j==strlen(b))
			c[0]='0';
		else
		{
			for(i=j;i<strlen(b);i++)
				c[i-j]=b[i];
		}
	printf("%s\n",c);
    }
	else
	{
		j=1;
	c[0]='-';
	b[0]='0';
    for(i=1;i<strlen(a);i++)
		b[i]=a[strlen(a)-i];
	for(i=1;i<strlen(b);i++)
		if(b[i]!='0')
		{j=i;break;}
	for(i=j;i<strlen(b);i++)
	c[i-j]=b[i];
	printf("-");
	printf("%s\n",c);
    }
	scanf("\n");
}
void main()
{  
	int n; 
	for(n=1;n<=6;n++)
	{
	  char a[1000]={'\0'};
	  gets(a);
      min(a);
	}
}