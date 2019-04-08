void main()
{
	char str1[100],str2[100];
	int i,len,j=0;
	gets(str1);
	len=strlen(str1);
	for(i=0;i<len;i++)
	{
		if(str1[i]!=' ')
		{
			str2[j]=str1[i];
			j++;
		}
		else
		{
			if(str1[i+1]!=' ')
			{
				str2[j]=str1[i];
				j++;
			}
		}
	}
	str2[j]='\0';
	printf("%s",str2);
}