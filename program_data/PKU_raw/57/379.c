
int main()
{
    char str1[32],b[50][32];
    int n,i,j,s;
    scanf("%d",&s);
    s=s+1;
    for(i=0;i<s;i++)
    {
        gets(str1);
        n=strlen(str1);
        if(str1[n-1]=='r'&&str1[n-2]=='e')
        str1[n-1]=str1[n-2]='\0';
        else if(str1[n-1]=='g'&&str1[n-2]=='n'&&str1[n-3]=='i')
        str1[n-1]=str1[n-2]=str1[n-3]='\0';
        else if(str1[n-1]=='y'&&str1[n-2]=='l')
        str1[n-1]=str1[n-2]='\0';
        for(j=0;j<32;j++)
        b[i][j]=str1[j];
    }
        for(i=0;i<s-1;i++)
        printf("%s\n",b[i]);
        printf("%s",b[s-1]);
        return 0;
}