main()
{
    char str[200];
    while(scanf("%s",str)!=EOF)
    {
        int n,i,j,k;
        printf("%s\n",str); 
        n=strlen(str);
        for(i=0,k=0;i<n;i++)
        {
            if(str[i]=='(')
            {
                k=i;
            }
            if(str[i]==')'&&str[k]=='(')
            {
                str[i]=' ';
                str[k]=' ';
                i=-1;
                k=0;
            }
        }
        for(i=0;i<n;i++)
        {
            if(str[i]!='('&&str[i]!=')')
                printf(" ");
            else
            {
                if(str[i]=='(')
                    printf("$");
                else
                    printf("?");
            }
        }
        printf("\n");
    }
    }
        

        