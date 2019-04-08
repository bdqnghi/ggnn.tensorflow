int main()
{
	char str[2][80];
	gets(str[0]);
	gets(str[1]);
	int i;
	for(i=0;i<80;i++)
	{
		if(str[0][i]>96)
		{
			str[0][i]=str[0][i]-32;
		}
		if(str[0][i]=='\0')//????????????????????
			break;
	}
	for(i=0;i<80;i++)
	{
		if(str[1][i]>96)
		{
			str[1][i]=str[1][i]-32;
		}
		if(str[1][i]=='\0')//????????????????????
			break; 
	}
	if(strcmp(str[0],str[1])>0)
		printf(">");
	else
		if(strcmp(str[0],str[1])==0)
			printf("=");
		else
			printf("<");
	return 0;
}