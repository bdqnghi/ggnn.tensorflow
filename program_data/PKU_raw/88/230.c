int main()
{
	char *str,*p;
	str = (char *)malloc(30*sizeof(char));
	
	gets(str);
	
	for(p=str;*p!='\0';p++){
		if ((*p>'9'||*p<'0')&&(*(p+1)<='9'&&*(p+1)>='0')){
			printf("\n");
		}
		if ((*p)<='9'&&(*p)>='0') printf("%c",*p);
	}
}
