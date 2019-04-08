char swap(char str[100])
{
    int n,i,j;
    n=strlen(str);
    for(i=n-1;i>=0;i--)
    if(str[i]==' ') break;
    for(j=i+1;j<n;j++) printf("%c",str[j]);
    if(i>0)
    {
    printf(" ");
    str[i]='\0';
    swap(str);
    }
}
int main()
{
    char str[101];
    gets(str);
    swap(str);
}