int main()
{
    char str[100];
    int i,l,s,m,j;
    gets(str);
    s=0;
    l=strlen(str);
    for(i=0;i<l-2;i++)
    for(s=0;s<l-i;s++)
    if(str[i]==' '&&str[i+1]==' ')
    for(j=i+1;j<l-s+1;j++)
    str[j]=str[j+1];
    printf("%s\n",str);
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
}