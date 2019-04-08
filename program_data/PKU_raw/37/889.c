int main()
{
    int n,l,t,i,j,k,s,q;
    char a[26];
    char c[100];
    int b[26]={0};
    char p[100001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        t=0;
        scanf("%s",p);
        a[0]=*p;
        b[0]=1;
        t++;
        l=strlen(p);
        for(j=1;j<l;j++)
        {
            q=0;
            for(k=0;k<t;k++)
            {
                s=*(p+j)-*(a+k);
                if(s==0)
                {
                    b[k]++;
                    q=1;
                    break;
                }
            }
            if(q==0)
            {
                a[t]=*(p+j);
                b[t]=1;
                t++;
            }
        }
        q=0;
        for(j=0;j<t;j++)
        if(b[j]==1)
        {
            c[i]=a[j];
            q++;
            break;
        }
        if(q==0)
        c[i]='A';
    }
    for(i=0;i<n;i++)
    if(c[i]=='A')
    printf("no\n");
    else
    printf("%c\n",c[i]);
    return 0;
}