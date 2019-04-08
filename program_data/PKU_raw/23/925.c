
void main()
{
	char s[101];
	char *p1,*p2;

	gets(s);
	p1=s+strlen(s);
	while(p1+1>s){
		for(p2=p1,*p2=0;*p1!=' '&&p1>=s;p1--){
			;
		}
		if(p1+1>s){
			printf("%s",p1+1);
			putchar(' ');
		}
		else puts(s);
	}
}
