int main()
{
    char a[101],c;
    char *p,*q;
    int i,l,j;
    gets(a);   c=a[0];
    p=a,q=p+1;
    
    l=strlen(a);
    for(i=0;i<l-1;i++){
        *p=*p + *(p+1);p++;}
    *p+=c;
    p=a;
    for(i=0;i<l;i++){
       printf("%c",*(p++));}
}