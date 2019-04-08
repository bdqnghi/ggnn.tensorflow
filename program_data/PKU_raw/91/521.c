
int main(){
    int i;
    char s[101],s1[101];
    gets(s);
    for(i=0;i<strlen(s);i++){
    if(i<strlen(s)-1)
        s1[i]=s[i]+s[i+1];
    if(i==strlen(s)-1)
        s1[i]=s[i]+s[0];
    }
    s1[strlen(s)]=0;
    puts(s1);
    return 0;
}
