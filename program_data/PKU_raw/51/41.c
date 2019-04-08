
int main()
{
    char a[501],s[500][5],tmp;
    int m[500];
    int n,i,j,max;
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;i<=499;i++) m[i]=1;
    for(i=0;i<=strlen(a)-n;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            s[i][j]=a[i+j];
        }
        s[i][n]='\0';
    }
    for(i=0;i<=strlen(a)-n-1;i++)
    {
        if(m[i]==-1) continue;
        for(j=i+1;j<=strlen(a)-n;j++)
        {
            if(strcmp(s[i],s[j])==0)
            {
                m[i]++;
                m[j]=-1;
            }
        }
    }
    max=m[0];
    for(i=0;i<=strlen(a)-n;i++)
    {
        max=(max>m[i])? max : m[i];
    }    
    if(max>1)
    {
        printf("%d\n",max);
        for(i=0;i<=strlen(a)-n;i++)
        {
            if(m[i]==max) printf("%s\n",s[i]);
        }
    }
    else printf("NO");
    return 0;
}
    