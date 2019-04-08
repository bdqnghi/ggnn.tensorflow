int main()
{
    char s[101]={0},a[101]={0},b[101]={0},cmp[101]={0},mark[101]={0};
    int i,j,k;
    gets(s);
    gets(a);
    gets(b);
    for(i=0;i<=strlen(s)-strlen(a);i++)
    {
        k=0;
        if ((i!=0)&&(s[i-1]!=' ')) {
            continue;
        }
        for(j=0;j<strlen(a);j++)
            cmp[k++]=s[j+i];
        //printf("%s\n",cmp);
        if((strcmp(cmp,a)==0)&&((s[j+i]==' ')||(s[j+i]=='\n')||(s[j+i]=='\0'))) mark[i]=1;
        //if(strcmp(cmp,a)==0) mark[i]=1;
    }
    for(i=0;i<strlen(s);i++)
    {
        if(mark[i]==0)   printf("%c",s[i]);
        else
        {
            printf("%s",b);
            while(1)
            {
                if((s[i]==' ')||(s[i]=='\n')||(s[i]=='\0')) {i--;break;}
                else i++;
            }
        }
    }
    return 0;
}