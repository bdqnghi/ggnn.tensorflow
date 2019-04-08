
int swap(int *p1,int *p2)
{
    int x;
    x=*p1;
    *p1=*p2;
    *p2=x;
}

int main()
{
    int a[100000];
    int *p,*q,n,i,k,num=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    for (p=a;p<a+n;p++)
    {
        if (*p==k)
        {
            for (q=p+1;q<a+n;q++)
                if (*q!=k)
                {
                    swap(p,q);
                    num++;
                    break;
                }
        }
        if (*p==k)
            break;
    }
    for (q=a;q<p-1;q++)
        printf("%d ",*q);
    printf("%d",*q);
}
