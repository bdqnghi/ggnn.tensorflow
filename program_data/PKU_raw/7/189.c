int main(int argc, char* argv[])
{
	char string[256],subString[256],replacement[256],buffer[256]={0},result[256]={0};
	scanf("%s\n%s\n%s",string,subString,replacement);
	int mainlen=strlen(string),sublen=strlen(subString);
	int i;
	for(i=0;i<=mainlen-sublen;i++)
	{
		strncpy(buffer,(string+i),sublen);
		if(!strcmp(buffer,subString))
		{
			strncpy(result,string,i);
			strcat(result,replacement);
			strcat(result,(string+i+sublen));
			printf("%s",result);
	        return 0;
		}
	}
		printf("%s",string);
		return 0;
}
