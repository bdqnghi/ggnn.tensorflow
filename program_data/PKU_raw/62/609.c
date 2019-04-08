int main()
{ 
	int l,i;
	char s[300];
gets(s);
l=strlen(s);
for(i=0;s[i]!='\0';i++){
if(s[i]!=32) printf("%c",s[i]);
if(s[i]==32&&s[i+1]!=32) printf("%c",s[i]);

}


	return 0;
}