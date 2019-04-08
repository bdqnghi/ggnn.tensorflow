int main(){
	char s[101],a[101],b[101];
	char *ss[100];
	int i,n=0;
	gets(s);
	gets(a);
	gets(b);
	//convert
	ss[n++]=s;
	for (i=0;s[i];i++){
		if(s[i]==' '){
			s[i]=0;
			ss[n++]=s+i+1;
		}
	}
	//output
	for(i=0;i<n;i++){
		if(i>0)
			printf(" ");
		if(strcmp(ss[i],a)==0)
			printf("%s",b);
		else
			printf(ss[i]);
	}
	printf("\n");
	return 0;
}
