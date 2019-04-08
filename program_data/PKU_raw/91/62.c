int main()
{
	char s[101],s1[101];
	gets(s);
	char *p=s,*p1=s1;
	for(;*p!='\0';p++,p1++){
		if(*(p+1)!='\0'){
			*p1=*p+*(p+1);
		}else{
			char *p0=s;
			*p1=*p+*p0;
		}
	}
	*p1='\0';
	p1=s1;
	printf("%s",p1);
	return 0;
}