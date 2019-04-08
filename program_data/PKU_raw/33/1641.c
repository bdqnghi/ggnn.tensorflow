int main()
{
    int n;
    scanf("%d",&n); 
    char num[256];
    for(int i=0;i<=n;i++)
    {
 
        gets(num);
        for(int j=0;j<=255;j++)
        {
            if(num[j]=='A')
            num[j]='T';
            else if(num[j]=='C')
            num[j]='G';
            else if(num[j]=='G')
            num[j]='C';
            else if(num[j]=='T')
            num[j]='A';
            if(num[j]=='\0')
            {printf("%s\n",num);break;}
        }
    }
    return 0;
}
