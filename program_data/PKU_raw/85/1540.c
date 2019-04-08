int main()
{
	int n,i,j;
	char str[21],temp[21];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(str);
		if(((str[0]>='a')&&(str[0]<='z'))||((str[0]>='A')&&(str[0]<='Z'))||(str[0]=='_'))
		{
            temp[0]=str[0];
			for(j=1;str[j]!='\0';j++)
			{
				if(((str[j]>='a')&&(str[j]<='z'))||((str[j]>='A')&&(str[j]<='Z'))||((str[j]>='0')&&(str[j]<='9'))||(str[j]=='_'))
				{
					   temp[j]=str[j];
				}
				else
				{
					temp[j]='\0';
				}
			}
			temp[j]='\0';
			if(strcmp(temp,str)==0)
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}

			
	
	
