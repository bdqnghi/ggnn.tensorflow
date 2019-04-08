
int main()
{
	int n,i;
	char s[L];
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++){
		if(s[i]==32&&s[i+1]==32){
			for(i;i<n;i++){
				s[i]=s[i+1];
			}
			i=0;
		}
	}
	for(i=0;i<n;i++){
		if((s[i]=='.'&&s[i+1]=='d')||(s[i]=='c'&&s[i+1]=='d'))
			s[i+1]='\0';
         }
	printf("%s", s);
	return 0;
}