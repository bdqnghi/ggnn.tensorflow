int main()
{
    char sz[100];
    int n,en;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
            gets(sz);
            en=strlen(sz);
            switch(sz[en-1])
            {
                            case 'g':
                                 for(int j=0;j<en-4;j++)
                                 printf("%c",sz[j]);
                                 printf("%c\n",sz[en-4]);
                                 break;
                             case 'r':
                                 for(int j=0;j<en-3;j++)
                                 printf("%c",sz[j]);
                                 printf("%c\n",sz[en-3]);
                                 break;
                             case 'y':
                                 for(int j=0;j<en-3;j++)
                                 printf("%c",sz[j]);
                                 printf("%c\n",sz[en-3]);
                                 break;
            }
    }scanf("%d",&n);
            return 0;
}
