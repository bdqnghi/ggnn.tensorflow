
void insert(char str[],char substr[])
{
    int max,len,i,j,position;
	char str1[15];
    len=strlen(str);
	max=str[0];
	for(i=0;i<len;i++)
	{
		if(str[i]>max)
		{
			max=str[i];
		    position=i;
		}
	}
	for(j=0;j<=position;j++)
		str1[j]=str[j];
	for(j=position+1;j<len;j++)
		str1[j+3]=str[j];
	for(j=1;j<4;j++)
	{
		str1[j+position]=substr[j-1];
	}
    str1[len+3]='\0';
	printf("%s\n",str1);
}


void main()
{
    char str[11];
	char substr[4];
	
	while(scanf("%s",str)!=EOF)

	{
		
		scanf("%s",substr);
        insert(str,substr);
		
	}
	
}