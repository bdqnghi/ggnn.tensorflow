int main()
{
    char a[80]={0},b[80]={0};
    int i=0;
    for(gets(a);i<80,a[i];i++){
        if(a[i]>='A'&&a[i]<='Z')a[i]+=32;
    }
    i=0;
    for(gets(b);i<80,b[i];i++){
        if(b[i]>='A'&&b[i]<='Z')b[i]+=32;
    }
    if(strcmp(a,b)==1)printf("%c",'>');
    if(strcmp(a,b)==0)printf("%c",'=');
    if(strcmp(a,b)==-1)printf("%c",'<');
    return 0;
}