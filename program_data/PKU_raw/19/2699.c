
char s[1000];
char a[101];
char b[101];
char buf[101];

int main(){
	unsigned int i;
	int index;
	gets(s);
	scanf("%s",a);
	scanf("%s",b);
	index=0;
	for(i=0;i<strlen(s);i++){		
		if(s[i]==' ' || (i==strlen(s)-1)){
			if(i==strlen(s)-1)
				buf[index++]=s[i];
			buf[index]='\0';
			index=0;
			if(!strcmp(buf,a)){
				printf("%s",b);
			}
			else{
				printf("%s",buf);
			}
			if(i!=strlen(s)-1){
				printf(" ");
			}
		}
		else{
			buf[index++]=s[i];
		}
	}	
	return 0;
}