int main()
{
	char s[100];
	char a[100];
	char t[100];
	char b[100];
	int k,i,j,word;
	word=0;
	k=0;
	gets(s);
	gets(a);
	gets(b);
	int len;
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]==' ')
		{word=0;}
		else if(word==0)
		{  k++;
		word=1;}
	}
	int A=0;
	int n;
	int m=0;
	for(j=0;j<k;j++)
	{
		for(i=A,n=0;i<len;i++,n++)
		{
			if(s[i]!=' ')
			{t[n]=s[i];}
			if(s[i]==' ')
			{t[n]='\0';
			 A=i+1;
			 break;}
		}
		if(i==len)
		{ t[n]='\0';}
		
		if(strcmp(t,a)==0)
		{strcpy(t,b);}
		m++;
		if(m!=k)
		{
			printf("%s ",t);
		}
		if(m==k)
		{printf("%s\n",t);}
	}
	return 0;
}
