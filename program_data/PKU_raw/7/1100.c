void main()
{
	int i,j,t;
	char string[256]={0};
	char substring[256]={0};
	char replacement[256]={0};
	scanf("%s",string);
	scanf("%s",substring);
	scanf("%s",replacement);
	for(i=0;i<strlen(string);i++)
	{
		t=0;
		if(substring[0]==string[i])
		{
			for(j=0;j<strlen(substring);j++)
			{
				if(substring[j]==string[i+j]) t++;		
			}
		}
		if(t==strlen(substring)) 
		{
			break;
		}
	}
	if(i<strlen(string)-1)
	{
	for(j=0;j<strlen(substring);j++)
	{
		string[j+i]=replacement[j];
	}
	}
	printf("%s",string);
}
