
int main()
{
    int n;
    char a[N],b[4];
    int i,j;

    gets(b);

    n=atoi(b);

    for(i=0;i<n;i++)
    {
        gets(a);
        if((a[0]<'a'||a[0]>'z')&&(a[0]<'A'||a[0]>'Z')&&a[0]!='_')
        {
            printf("no\n");
        }
        else
        {
            for(j=0;a[j]!='\0';j++)
            {
                if((a[j]<'0'||a[j]>'9')&&(a[j]<'a'||a[j]>'z')&&(a[j]<'A'||a[j]>'Z')&&a[j]!='_')
                {
                    printf("no\n");
                    break;
                }
            }
            if(a[j]=='\0')
            {
                printf("yes\n");
            }
        }
    }

    return 0;
}