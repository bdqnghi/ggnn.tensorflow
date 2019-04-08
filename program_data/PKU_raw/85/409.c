int main()
{
    int n,i,j,count=0;
    char a[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
                    int b=strlen(a[i]);
                    if((a[i][0]>='0')&&(a[i][0]<='9'))
                                    printf("no\n");
                    else
                    {
                           for(j=0;j<b;j++)
                           {
                                             if(((a[i][j]>'9')&&(a[i][j]<'A'))||((a[i][j]>'Z')&&(a[i][j]<'_'))||((a[i][j]>'_')&&(a[i][j]<'a'))||(a[i][j]>'z')||(a[i][j]<'0'))
                                             count++;
                           }
                           if(count>0)
                           printf("no\n");
                           else printf("yes\n");
                           count=0;
                    }
                    
    }
    getchar();
    getchar();
    return 0;
}
                                    
    
