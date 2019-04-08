int main()
{
char* str;
int i,l;
str = (char *)malloc(1000 * sizeof(char));
gets(str);
l=strlen(str);
for(i=0;i<l;i++,str++)
{
	if(*str==' '&&*(str+1)==' ') i=i;
	else
	
		printf("%c",*str);
	
	
	}
return 0;
}