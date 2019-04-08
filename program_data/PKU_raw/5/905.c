
int main()
{
    double n;
    char a[500];
    char b[500];
    
    scanf("%lf",&n);
    scanf("%s",a);
    scanf("%s",b);
    
    int i,x;
    x=0;
    
    double w,k,j,l;
    
    k=strlen(a);
    l=strlen(b);
    
    if(k==l)
    {
        for(i=0;i<k;i++)
        {
            if(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G') x=1;
            else 
            {
                x=0;
                break;
            }
            if(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G') x=1;
            else 
            {
                x=0;
                break;
            }
        }
        if(x==1)
        {
     w=0;
    
    for(i=0;i<k;i++)
    {
        if(a[i]==b[i]) w=w+1;
    }
    
    
    
    j=w/k;
    
    if(j<=n) printf("no");
    else printf("yes");
        }
        else printf("error");
    }
    
    else printf("error");
    
    return 0;
}

