int main()
{
    char a[105];
int mm;scanf("%d",&mm);
while(mm--)
{
    while(gets(a))
    {
        int n=strlen(a);int i=0,j,b[105];
        for(i=0;a[i];i++)
        {
            if(a[i]=='('){b[i]=1;}
            else if(a[i]==')'){b[i]=-1;}
            else b[i]=0;
        }//first step:change char a[] to int b[].
        for(i=0;i<n;i++)
        {
            if(b[i]==-1)
            {
                for(j=i;j>=0;j--)
                {
                    if(b[j]==1)
                    {
                        b[i]=0;b[j]=0;break;
                    }
                }

            }
        }
        puts(a);printf("\n");
        for(i=0;i<n;i++)
        {
            if(b[i]==0)
                printf(" ");
            else if(b[i]==1)
                printf("$");
            else printf("?");
        }

        printf("\n");




    }
}
    return 0;
}