int main(int argc, char* argv[])
{
	char s[81],m[81];
	gets(s);
	gets(m);
	int a, b, i;
	a=strlen(s);
	b=strlen(m);
	for(i=0;i<a;i++){
		if(s[i]>='a'&&s[i]<='z')
			s[i]=s[i]-32;
	}
	for(i=0;i<b;i++){
		if(m[i]>='a'&&m[i]<='z')
			m[i]=m[i]-32;
	}
	int c,k=0;
	if(a>=b)
		c=a;
	else
		c=b;
	for(i=0;i<c;i++){
		if(s[i]>m[i]){
			printf(">");
			break;
		}
		else if(s[i]<m[i]){
			printf("<");
			break;
		}
		k++;
	}
	if(k==c)
		printf("=");
	return 0;
}