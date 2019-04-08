int MAX(char str[],int len)
{
	int i,max,temp;
	max=0;
	for(i=1;i<len;i++)
	{if(str[max]<str[i])
		{
			temp=max;
			max=i;
			i=temp;
		}
	}
	return (max);
}
void main()
{
	char str[10],substr[3];
	int stop,len,i;
	for(;;)
	{
		stop=scanf("%s %s",str,substr);
		if(stop!=2) break;
		len=strlen(str);
		for(i=0;i<=MAX(str,len);i++)
		printf("%c",str[i]);
		printf("%s",substr);
		for(i=MAX(str,len)+1;i<len;i++)
			printf("%c",str[i]);
                printf("\n");
	}
}