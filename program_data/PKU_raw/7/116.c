int main()
{
	char s[256];
	char a[256];
	char t[256];
	char c;
	int i,ls,j,la,lt,g,word=0;
	scanf("%s",s);
	scanf("%s",a);
	scanf("%s",t);
	ls=strlen(s);
	la=strlen(a);
	lt=strlen(t);
	
	for(i=0;i<ls;i++){
		if(word==0){
			g=0;
			if(s[i]==a[0]){
				g++;
				for(j=i+1;j<i+la;j++){
					if(s[j]==a[g]){
						g++;
					}
				}
				if(g==la){
					word=1;
					for(j=i;j<i+la;j++){
						s[j]=t[j-i];
					}
				}
			}
		}
	}

	printf("%s",s);
	return 0;
}







