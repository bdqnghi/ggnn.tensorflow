


int main()
{
	char str[256];
	char sta[256];
	char stb[256];
	char res[512] = "";

	gets(str);
	gets(sta);
	gets(stb);
	
	char* a = str;
	char* b = 0;

	if(b=strstr(a,sta))
	{
		strncat(res,a,b-a);
		strcat(res,stb);
		a = b+strlen(sta);
	}

	strcat(res,a);

	printf("%s\n",res);

	return 0;
}