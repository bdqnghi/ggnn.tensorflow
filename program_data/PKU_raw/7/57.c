
int main() 
{ 
	char string[256];
	char substring[256];
	char replacement[256];
	int x;
	gets(string);
	gets(substring);
	gets(replacement);
	x=strstr(string,substring)-&string[0];
	if(strchr(string,substring[0])!=0)memmove(string+x,replacement,strlen(replacement));
	printf("%s",string);
	return 0;
}

