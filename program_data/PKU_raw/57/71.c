int main()
{
int n,j;
scanf("%d\n",&n);
for(j=0;j<n;j++){
char s[10000];
gets(s);
int i,len;
len=strlen(s);
if(s[len-2]=='l'&&s[len-1]=='y'){for(i=0;i<len-2;i++)printf("%c",s[i]);printf("\n");}
else if(s[len-2]=='e'&&s[len-1]=='r'){for(i=0;i<len-2;i++)printf("%c",s[i]);printf("\n");}
else if(s[len-3]=='i'&&s[len-2]=='n'&&s[len-1]=='g'){for(i=0;i<len-3;i++)printf("%c",s[i]);printf("\n");}
}}
