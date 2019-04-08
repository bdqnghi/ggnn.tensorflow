int main()
{
    char s[1000],word[300];
    int i,n,j=0,m,k,ch;
    gets(s);
    n=strlen(s);
    for(i=0;i<=n;i++){
        if(s[i]!=' '&&s[i]!='\0'){
           word[j]=s[i];
           j++;
           word[j]='\0';
           }
        else if(s[i]==' '&&s[i-1]!=' '){
           ch=strlen(word);
           printf("%d,",ch);
           j=0;
           for(k=0;k<100;k++){
             word[k]='\0';
             }
           }
        else if(s[i]=='\0'){
           ch=strlen(word);
           printf("%d",ch);
           }
        }
    scanf("%d",&m);
    return 0;
}
