int read();
void updown();
void print();
int a[100],b[100],n;
int main()
{
    read();
    updown();
    print();
    return 0;
}
int read()
{
    int i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    return 0;
}
void updown()
{
    int i;
    for (i=1;i<=n;i++)
    {
        b[i]=a[n-i+1];
    }
    return;
}
void print()
{
    int i;
    for (i=1;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    printf("%d",b[n]);
    return;
}

