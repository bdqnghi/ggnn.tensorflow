int main()
{
	int n,i,l;
	char t1[100],t2[100];
	char s[100][100],s1[4]="er",s2[4]="ly",s3[5]="ing";
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
		l=strlen(s[i]);
		strcpy(t1,s[i]+l-2);
		strcpy(t2,s[i]+l-3);
		if(strcmp(t1,s1)==0){
			s[i][l-2]='\0';
		}
		if(strcmp(t1,s2)==0){
			s[i][l-2]='\0';
		}
		if(strcmp(t2,s3)==0){
			s[i][l-3]='\0';
		}
		puts(s[i]);
	}
	return 0;
}