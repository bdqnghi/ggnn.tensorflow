int a(char str[])
{
	int i,k=0;
	for(i=1;i<=strlen(str)-1;i++)
		if(str[i]>str[k]) k=i;
	return(k);
}
void b(char str[],char substr[],int k)
{
	char str2[100];
	int i;
	for(i=0;i<=strlen(str)-2-k;i++)
		str2[i]=str[i+k+1];
	str2[i]=0;
	str[k+1]='\0';
	strcat(str,substr);
	strcat(str,str2);
}
main()
{
	int k,i=0;
	char str[100],substr[100],str1[100][100];
	while(scanf("%s%s",str,substr)!=EOF)
	{
	k=a(str);
	b(str,substr,k);
	i++;
	strcpy(str1[i],str);
	}
	for(k=1;k<=i;k++)
		puts(str1[k]);
}

	
