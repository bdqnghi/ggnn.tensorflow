int main()
{
    int i;
    char a[5]={'\0','\0','\0','\0','\0'};
    scanf("%s",a);
    for(i=4;i>=0;i--)
    {
        if(a[i]!='\0')printf("%c",a[i]);
    }
}
