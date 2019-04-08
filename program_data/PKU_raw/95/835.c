void main()
{
	int i=0;
	char str1[100],str2[100];
	gets(str1);
	gets(str2);
	while(str1[i]!='\0')
	{	if(str1[i]!=str2[i]&&str1[i]+32!=str2[i]&&str1[i]-32!=str2[i])
		{
			if((str1[i]>='A'&&str1[i]<='Z')&&(str2[i]>='A'&&str2[i]<='Z'))
			{	
				if(str1[i]>str2[i])
				{
				printf(">");
				break;
				}
			   else
			   {
				printf("<");
				break;
			   }
			}
			if((str1[i]>='a'&&str1[i]<='z')&&(str2[i]>='a'&&str2[i]<='z'))
			{	
				if(str1[i]>str2[i])
				{
				printf(">");
				break;
				}
			   else
			   {
				printf("<");
				break;
			   }
			}
			if((str1[i]>='A'&&str1[i]<='Z')&&(str2[i]>='a'&&str2[i]<='z'))
			{	
				if(str1[i]>str2[i]-32)
				{
				printf(">");
				break;
				}
			   else if(str1[i]<str2[i]-32)
			   {
				printf("<");
				break;
			   }
			}
				if((str1[i]>='a'&&str1[i]<='z')&&(str2[i]>='A'&&str2[i]<='Z'))
			{	
				if(str1[i]-32>str2[i])
				{
				printf(">");
				break;
				}
			   else if(str1[i]-32<str2[i])
			   {
				printf("<");
				break;
			   }
			}	
		}
		if(str1[i+1]=='\0')
			printf("=");
		i=i+1;
	}
}
