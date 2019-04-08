void main()
{
	char str1[100],str2[100],str3[100],str4[100][100],*p;
	gets(str1);
	gets(str2);
	gets(str3);
	p=str1;
	int i,j=0,k=0,n;
	n=strlen(str1);
	for(i=0;i<=n;i++)
	{
		if((*(p+i)!=' ')&&(*(p+i)!='\0'))
		{
			str4[k][j]=str1[i];
			j=j+1;
		}
		else
		{
			str4[k][j]='\0';
			j=0;
			k=k+1;
		}
	}
	for(i=0;i<k;i++)
	{
		if(strcmp(str4[i],str2)==0)
		{
			
			strcpy(str4[i],str3);
		}
	}
	for(i=0;i<k-1;i++)
	printf("%s ",str4[i]);
	printf("%s\n",str4[k-1]);
}