int main(){
	char str[1000];
	char a[10];
	gets(a);
	int n=atoi(a);
	while(n--){
		cin.getline(str,999);
		int len=strlen(str);
		char *p1=str+len-1-1;
		char *p2=str+len-1-2;
		if ((*p1=='e')&&(*(p1+1)=='r')) *p1='\0';
		if ((*p1=='l')&&(*(p1+1)=='y')) *p1='\0';
		if ((*p2=='i')&&(*(p2+1)=='n')&&(*(p2+2)=='g')) *p2='\0';
	puts(str);
	}
	return 0;
}

