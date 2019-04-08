void main()
{		char str[16],substr[4];
	char output[20];
	char *string,*max;
	int i,j;
	while((scanf("%s",str))!=EOF)
	{

	scanf("%s",substr);
	string=str;
	max=str;
	for(i=0;i<(strlen(str));i++)
	{
		if(*string>*max)
		{
			max=string;
		}
		string++;
	}
	string=str;
	for(i=0;(*string)!=(*max);string++,i++)
	output[i]=*string;
	output[i]=*max;
	max++;
	for(j=i+1;j<=(3+i);j++)
		output[j]=substr[j-i-1];
	for(;j<(strlen(str)+strlen(substr));j++,i++)
		output[j]=str[i+1];
	for(i=0;i<(strlen(str)+strlen(substr));i++)
	printf("%c",output[i]);
	printf("\n");
	}
}




