int main()
{
    long m,n,l1,l2,i,j,p,o,l;  
    long long sum=0,k;
    char s1[500],s2[500];
    int a[500],b[500],c[1500];
    scanf("%s",s1);
    scanf("%s",s2);
    l1=strlen(s1);
    l2=strlen(s2);
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    for (i=0;i<l1;i++) a[l1-1-i]=s1[i]-48;
    for (i=0;i<l2;i++) b[l2-1-i]=s2[i]-48;
    if (l1>l2) l=l1;
    else l=l2;    
    for (i=0;i<l;i++)
    {
        c[i]+=a[i]+b[i];
        if (c[i]>=10)
        {
            c[i]=c[i]%10;
            c[i+1]++;
        }
    }               
    
    while ((c[l]==0)&&(l>1)) l--;
    if (c[l]>0) l++;
    for (i=l-1;i>=0;i--)printf("%d",c[i]);    
    
        return 0;
}        
