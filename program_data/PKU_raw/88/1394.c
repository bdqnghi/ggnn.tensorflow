int main()
{
    char str[100];
    int i,j=0,l;
    gets(str);
    l=strlen(str);
    str[l+1]==' ';
    for(i=0;i<=l;i++)
    {
        if(str[i]>='0'&&str[i]<='9') str[j++]=str[i];
        if(str[i]>='0'&&str[i]<='9'&&(str[i+1]>'9'||str[i+1]<'0')) str[j++]='\n';
        if(str[i]=='\0') str[j]='\0';
        }
        for(j=0;str[j]!='\0';j++)
        printf("%c",str[j]);
        return 0;
        }
