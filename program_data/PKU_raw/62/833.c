
int main()
{
	int len,i,k=-1;
	char s[100],h[100];
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++){
		if((s[i]==s[i+1]&&s[i]!=' ')||s[i]!=' '||(s[i]==' '&&s[i+1]!=' ')){
			k++;
			h[k]=s[i];
		}
	}
	h[k+1]='\0';
	puts(h);
	return 0;
}