int main(void)
{
	char str[2000];
	char *media;media=str;
	char min[2000],max[2000];
	
    gets(str);
    int Mi=strlen(str)+1,Ma=0,strn;
	char *p;p=str;
	for(;;)
	{
		if(*media==' '||*media==',')
		{
			*media='\0';
			strn=media-p;
			if(strn>Ma) {strcpy(max,p);Ma=strn;}
			if(strn<Mi&&strn) {strcpy(min,p);Mi=strn;} 
			p=media+1;
		}
		else if(*media=='\0')
		{
			strn=strlen(p);
			if(strn>Ma) {strcpy(max,p);Ma=strn;}
			if(strn<Mi) {strcpy(min,p);Mi=strn;}
			break;
		}
		media++;
	}
	puts(max);
	puts(min);
	return 0;
}