int main()
{
    int n,i,l;
    scanf("%d\n",&n);
    char a[100];
    for(i=0;i<n;i++)
    {
        gets(a);
        int j;
        l=strlen(a);
        if (a[0]=='_')
        {
            for(j=1;j<l;j++)
            {
                if (a[j]>='A'&&a[j]<='Z')
                 ;
                 else if (a[j]=='_')
                 ;
                 else if (a[j]>='a'&&a[j]<='z')
                 ;
                 else if (a[j]>='0'&&a[j]<='9')
                  ;
                  else 
                  {printf("0\n");
                  break;}
                     
            }
            if (j==l)
            printf("1\n");
        }
        else if (a[0]>='a'&&a[0]<='z')
        {
             for(j=1;j<l;j++)
            {
                if (a[j]>='A'&&a[j]<='Z')
                 ;
                 else if (a[j]=='_')
                 ;
                 else if (a[j]>='a'&&a[j]<='z')
                 ;
                 else if (a[j]>='0'&&a[j]<='9')
                  ;
                  else 
                  {printf("0\n");
                  break;}
                     
            }
            if (j==l)
            printf("1\n");
        }
        else if (a[0]>='A'&&a[0]<='Z')
        {
             
             for(j=1;j<l;j++)
            {
                if (a[j]>='A'&&a[j]<='Z')
                 ;
                 else if (a[j]=='_')
                 ;
                 else if (a[j]>='a'&&a[j]<='z')
                 ;
                 else if (a[j]>='0'&&a[j]<='9')
                  ;
                  else 
                  {printf("0\n");
                  break;}
                     
            }
            if (j==l)
            printf("1\n");
        }
        else printf("0\n");
    }
    getchar();
    getchar();
    getchar();
}
