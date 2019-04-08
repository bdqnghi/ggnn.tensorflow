int main()
{
    char *p;
    char s[10000];
    int i=0;
    
    gets(s);
    p=s;
    for (p=s;*p!='\0';p++){
        if (*p!='\0') i++;
    }
    
    for (p=s;p<s+i-1;p++){
        printf("%c",*p+*(p+1));
    }
    p=s;
    printf("%c",*p+*(p+i-1));
    
}
