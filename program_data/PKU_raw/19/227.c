
int main(int argc, char* argv[])
{
	char str[255],from[255],to[255];
	char*s=str,*p;
	gets(s);
	scanf("%s%s",from,to);
	strcat(s," ");
	while(*s){
		p=strchr(s,' ');
		*p='\0';
		if(strcmp(s,from)==0)
		{
			printf("%s",to);
		}
		else{
            printf("%s",s);
		}
		s=p+1;
		if(*s)
		{
			printf(" ");
		}
	}

	return 0;
}