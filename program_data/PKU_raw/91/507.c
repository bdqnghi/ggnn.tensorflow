int main(){
	char s[101];
	char qinpeng[101];
	int i,j,l,a,b;
	char c;
	gets(s);
	//getchar();
	l=strlen(s);
	for(i=0;i<l-1;i++){
		a=*(s+i);
		b=*(s+i+1);
		*(qinpeng+i)=a+b;
	}
	a=*(s);
	b=*(s+l-1);
	*(qinpeng+l-1)=a+b;
	*(qinpeng+l)='\0';
	puts(qinpeng);



	return 0;
}


