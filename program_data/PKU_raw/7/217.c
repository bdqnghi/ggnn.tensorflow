int main()
{
	char string[256],substring[256],replacement[256];
	char *str,*sub;
	int a,n=0,b;
	scanf("%s%s%s",string,substring,replacement);
	sub=substring;
	a=strlen(substring);
	
	for(str=string;*str!='\0';str++)
	{
		if(*sub==*str)
		{
			if(*(sub+1)!='\0')
			{
				sub++;
			}
			else
			{
				str=str-a+1;
				n=1;
				break;
			}
		}
		else
		{
			sub=substring;
		}
	}
	
	if(n==0)
	{
		printf("%s",string);
		return 0;
	}
	
	sub=replacement;
	for(b=0;b<strlen(substring);b++)
	{
		*str=*sub;
		sub++;
		str++;
	}
	printf("%s",string);
	return 0;
}

