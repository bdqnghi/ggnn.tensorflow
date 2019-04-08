void main()
{
	char a[500]={0},b[30]={0},c[30]={0},temp[30]={0};
	int i,j,k,len,count=0;
	gets(a);
	gets(b);
	gets(c);
	len=strlen(a);
	
		for(i=0;i<=len;i++)
		{
			if(a[i]!=' '&&a[i]!='\0')
			{
				temp[count]=a[i];
				count++;
			}
			if(a[i]==' ')
			{
				temp[count]='\0';
				if(strcmp(temp,b)==0)
				{
					printf("%s ",c);
					
				}
				if(strcmp(temp,b)!=0)
				printf("%s ",temp);
				count=0;
			}
			if(a[i]=='\0')
			{
				
				temp[count]='\0';
				if(strcmp(temp,b)==0)
				{
					printf("%s\n",c);
					
				}
				if(strcmp(temp,b)!=0)
				printf("%s\n",temp);
				count=0;
			}
		}
	}

