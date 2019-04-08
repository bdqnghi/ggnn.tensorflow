int cmp(char *p1,char *p2)
{
         if(islower(*p1)) *p1-=32;
         if(islower(*p2)) *p2-=32;
	while(*p1==*p2&&*p1!='\0'&&*p2!='\0')
	{
		p1++;p2++;
		if(islower(*p1)) *p1-=32;
		if(islower(*p2)) *p2-=32;
	}
	if(*p1!='\0'&&*p2!='\0') return (*p1-*p2);
	else if(*p1!='\0') return 1;
	else if(*p2!='\0') return -1;
	else return 0;
}
int main()
{
	char str1[100],str2[100];
	gets(str1);gets(str2);
	if(cmp(str1,str2)==0) printf("=");
	else if(cmp(str1,str2)>0) printf(">");
	else printf("<");
	return 0;
}