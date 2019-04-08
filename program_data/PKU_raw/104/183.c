
int main()
{
    int x,y,i,a[20],b[20],p=1,q=1;
    scanf("%d %d",&x,&y);
    a[0]=x;
    for(i=1;i<20;i++)
    {
        a[i]=a[i-1]/2;
        if(a[i]==0)
        {
            break;
        }
        p=p+1;
    }
    b[0]=y;
    for(i=1;i<20;i++)
    {
        b[i]=b[i-1]/2;
        if(b[i]==0)
        {
            break;
        }
        q=q+1;
    }
    for(i=0;i<20;i++)
    {
        if(p==1||q==1)
        {
            printf("%d",a[0]);
            break;
        }
        if(p!=1||q!=1)
        {
            if((a[p-1-i]==b[q-1-i])&&(a[p-1-i-1]!=b[q-1-i-1]))
        {
            printf("%d",a[p-1-i]);
            break;
        }
        }
    }
    return 0;
}
