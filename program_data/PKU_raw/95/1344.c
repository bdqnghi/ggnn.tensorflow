int main()
{
    char a[80]={0},b[80]={0},i;
    for(i=0,gets(a);i<80,a[i];i++)
        if(a[i]>='A'&&a[i]<='Z')a[i]+=32;
    for(i=0,gets(b);i<80,b[i];i++)
        if(b[i]>='A'&&b[i]<='Z')b[i]+=32;
    printf("%c",'='+strcmp(a,b));
    return 0;
}