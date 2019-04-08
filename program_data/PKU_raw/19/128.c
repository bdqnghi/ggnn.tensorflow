int main()
{
	char s[100];
	char a[100];
	char b[100];
	char c[10]={' ','\0'};   
	gets(s);
	gets(a);
	gets(b);
	
	int i;
	char a2[100];
	a2[0]=' ';
	a2[1]=a[0];
	for(i=1;a[i-1]!='\0';i++)
	{
		a2[i+1]=a[i];
	}
	
	char tmp[100];
	char s2[100]={'\0'};

	int j;
	tmp[0]=s[0];
	for(i=1;s[i-1]!=' '&&s[i-1]!='\0';i++)   
	{
		if(s[i]==' '||s[i]=='\0')
		{
			tmp[i]='\0';
		}
		else
		{
			tmp[i]=s[i];
		}
	}
	if(strcmp(tmp,a)==0)          
	{
        printf("%s",b);
	}
    else                          
	{
	   	printf("%s",tmp);
	}
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')    
		{
			for(j=i+1;s[j]!=' '&&s[j]!='\0';j++)   
			{
				tmp[0]=' ';
				if(s[j+1]==' '||s[j+1]=='\0')
				{
		        	tmp[j-i]=s[j];
					tmp[j-i+1]='\0';
				}
				else
				{
					tmp[j-i]=s[j];
				}
			}
		}
		else
			continue;

		if(strcmp(tmp,a2)==0)
		{
			printf("%s",c);
		    printf("%s",b);
		}
		else
			printf("%s",tmp);
	}	
	printf("\n");
	return 0;
}
