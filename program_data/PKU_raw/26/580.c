main()
{
    int n,i,j,k=0;
    char a[100];
    gets(a);
    n=strlen(a);
    for(i=1;i<n;i++)
    {
               if(a[i]==' ')
               {
                             if(a[i+1]==' ')
                             {
                                             for(j=i+1;j<n;j++)
                                             {
                                             a[j]=a[j+1];
                                             }
                                             n=n-1;
                                             a[n]='\0';
                                             i=i-1;
                             }
               }
    }
    printf("%s",a);
    getchar();
    getchar();
}