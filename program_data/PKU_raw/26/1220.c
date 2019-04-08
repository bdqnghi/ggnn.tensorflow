int main(){
	int i,j;
	char s[101],a[101];
	gets(s);
	for(i=0,j=0;s[i]!='\0';i++){
		if(s[i]==' ')
		continue;
		else{
			a[j++]=s[i];
			if(s[i+1]==' ')
			a[j++]=' ';
			}
		}
	a[j]='\0';
	puts(a);
	return 0;
}