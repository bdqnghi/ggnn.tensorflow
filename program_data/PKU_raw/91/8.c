int main(){
    char s[110],*p;
    int len;
    gets(s);
    len=strlen(s);
    for(p=s;p<s+len;p++){
        if(p==s-1+len)
            printf("%c",(*p)+s[0]);
        else
            printf("%c",(*p)+*(p+1));
    }
    return 0;
} 
