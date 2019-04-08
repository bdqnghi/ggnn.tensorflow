int main(int argc, char* argv[])
{
	int n,i,j,m;
	scanf("%d",&n);
	char s[50];
	for(i=0;i<=n;i++){
		gets(s);
		m=strlen(s);
		for(j=m-1;m>=0;m--){
			if(s[m-1]=='r'||s[m-1]=='y'){
				s[m-2]='\0';break;
			}else if(s[m-1]=='g'){
				s[m-3]='\0';break;
		}}
                    printf("\n");printf("%s",s);
	}
				

	
	return 0;
}