int main()
{
	char change(char c);
	char str1[100],str2[100];
	int k1,k2,k,i;
	gets(str1);
	gets(str2);
	k1=strlen(str1);
	k2=strlen(str2);
	k=(k1<k2)?k1:k2;
	for(i=0;i<k1;i++)
		str1[i]=change(str1[i]);
	for(i=0;i<k2;i++)
		str2[i]=change(str2[i]);
	i=0;
	while(i<k)
	{
		if(str1[i]==str2[i])
			i++;
		else 
		{
			if(str1[i]>str2[i])
				printf(">\n");
			else printf("<\n");
			break;
		}
	}
	if((i==k)&&(k1==k)&&(k1!=k2))
		printf("<\n");
	if((i==k)&&(k2==k)&&(k1!=k2))
		printf(">\n");
	if((i==k)&&(k1==k2))
		printf("=\n");
	return 0;
}
char change(char c)
{
	if((c>='A')&&(c<='Z'))
		c=c+'a'-'A';
	return(c);
}

		
