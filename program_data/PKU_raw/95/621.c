
void main()
{
	void strlw(char s[]);
	int i,len;
	char a[80],b[80];
	gets(a);
	gets(b);
	len=strlen(a);
	for(i=0;i<len;i++){
		if(a[i]>='A'&&a[i]<='Z')
			a[i]+=32;
	}
	len=strlen(b);
	for(i=0;i<len;i++){
		if(b[i]>='A'&&b[i]<='Z')
			b[i]+=32;
	}
	for(i=0;(a[i]!='\0')||(b[i]!='\0');i++){
		if(a[i]>b[i]){
			printf(">");
			break;
		}
		else if(a[i]<b[i]){
			printf("<");
			break;
		}
	}
	if((a[i]=='\0')&&(b[i]=='\0'))
		printf("=");
}



