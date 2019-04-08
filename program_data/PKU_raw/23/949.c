void main()
{
	char str1[100],str2[100];
	int n,i,j,k;
	gets(str1);
	n=strlen(str1);
	i=n-1;
	for(j=0;str1[i]!=32&&i>=0;i--)
	{str2[j]=str1[i];
	j++;}
	for(k=j-1;k>=0;k--)
		printf("%c",str2[k]);
	i--;
	while(i>=0)
	{for(j=0;str1[i]!=32&&i>=0;i--)
	{str2[j]=str1[i];
	j++;}
	printf(" ");
	for(k=j-1;k>=0;k--)
		printf("%c",str2[k]);
	i--;}
	
	
}
