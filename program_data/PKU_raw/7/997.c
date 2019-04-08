void right(char a[],int l,int t)
{
    int i;
    for(i=l;i>=t;i--)
    a[i]=a[i-1];
    a[l+1]='\0';
}
void left(char a[],int l,int t)
{
    int i;
    for(i=t;i<=l;i++)
    a[i-2]=a[i-1];
    a[l-1]='\0';
}
int main()
{
    char a[256];
    char b[256];
    char c[256];
    int i,j,l1,l2,l3,d,e,s,r;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    l1=strlen(a);
    l2=strlen(b);
    l3=strlen(c);
    if(l2>l3)
    {
        s=1;
        r=l2-l3;
    }
    else if(l2==l3)
    s=r=0;
    else
    {
        s=-1;
        r=l3-l2;
    }
    for(i=1;i<=l1;i++)
    {
        e=a[i-1]-b[0];
        if(e==0)
        {
            d=0;
            for(j=1;j<=l2-1;j++)
            {
                e=a[i+j-1]-b[j];
                if(e!=0)
                d=1;
            }
            if(d==0)
            {
                for(j=1;j<=r;j++)
                {
                    if(s>0)
                    left(a,l1,i+l2);
                    if(s<0)
                    right(a,l1,i);
                }
                for(j=1;j<=l3;j++)
                a[i+j-2]=c[j-1];
                break;
            }
        }
    }
    printf("%s",a);
    return 0;
}