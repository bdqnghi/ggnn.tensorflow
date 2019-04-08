const char flag=-128,noo=-126;
int main(){
	int i,l1,l2,l;
	char s1[101],s2[101],s[1001],*p;
	gets(s);gets(s1);gets(s2);
	l1=strlen(s1);l2=strlen(s2);l=strlen(s);
	while ((p=strstr(s,s1))!=NULL){
		/*if(l2>l1){
			for (i=l-1;&s[i]>=p;i--) s[i+l2-l1]=s[i];
			l+=l2-l1;s[l]=0;
		}
		for (i=0;i<l2;i++,p++) *p=s2[i];
		if(l2<l1){
			for (;*(p+l1-l2)!=0;p++) *p=*(p+l1-l2);
			*p=0;l-=l1-l2;
		}*/
		if(p!=s&&*(p-1)!=' ') {*p=noo;continue;}
		*p=flag;
		for (p++;*(p+l1-1)!=0;p++) *p=*(p+l1-1);
		*p=0;l-=l1-1;
	}
	//puts(s);
	//for (i=0;i<l;i++) printf("%d ",s[i]);
	for (i=0;i<l;i++)
		if(s[i]==flag) printf("%s",s2);
		else if(s[i]==noo) printf("%c",s1[0]);
		else printf("%c",s[i]);
	printf("\n");
	return 0;
}