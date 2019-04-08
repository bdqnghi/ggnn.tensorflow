int main()
{
    int n,k;
    char c[100];
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++)
    {
        k=1;
        gets(c);
        for (int j=0;c[j]!='\0';j++)
        {
            if ((j==0)&&(c[j]<='9')&&(c[j]>='0'))
            {
                k=0;
                break;
            }
            else if ((c[j]<='z')&&(c[j]>='a')) continue;
            else if ((c[j]<='Z')&&(c[j]>='A')) continue;
            else if ((c[j]<='9')&&(c[j]>='0')) continue;
            else if (c[j]=='_') continue;
            else
            {
                k=0;
                break;
            }
        }
        printf("%d\n",k);
    }
    return 0;
}
