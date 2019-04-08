int main(){
	char s[100],t[100],c;
	int i,m;
	gets(s);
	gets(t);
	for (i=0;s[i]!='\0';i++){
		if ((s[i]>='a')&&(s[i]<='z'))
			s[i]=s[i]-32;
	}
	for (i=0;t[i]!='\0';i++){
		if ((t[i]>='a')&&(t[i]<='z'))
			t[i]=t[i]-32;
	}
	m=1;
	for (i=0;(t[i]!='\0')&&(s[i]!='\0');i++){
		if (s[i]>t[i]){
			printf(">");
			m=0;
			break;
		}
		else if (s[i]<t[i]){
			printf("<");
			m=0;
			break;
		}
	}
	if (m==1)
		printf("=");
	return 0;
}