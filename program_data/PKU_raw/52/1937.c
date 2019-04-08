void main()
{
    int n,m,i;
    int *p;
    int a[100];
    void change(int *p,int n,int m);
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    p=&a[0];
    change(p,n,m);
    printf("%d",*p);
    for(i=1;i<n;i++)
    printf(" %d",*(p+i));
    putchar('\n');
}
void change(int *p,int n,int m)
{
    int i;
    for(i=n-1;i>=0;i--)
    *(p+i+m)=*(p+i);
    for(i=0;i<m;i++)
    *(p+i)=*(p+i+n);
}
