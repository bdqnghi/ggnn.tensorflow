
void UpsideDown (int *, int);
int main()
{
    int a[105], n, m,i;
    int *p=NULL;
     scanf("%d %d",&n,&m);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    p = a;
    UpsideDown(p, n);
    UpsideDown(p, m);
    UpsideDown(p+m, n-m);
    for(i=0;i<n-1;i++)
     printf("%d ",a[i]);
	printf("%d",a[n-1]);
    return 0;
}
void UpsideDown(int *a, int k)
{
    int temp;
    int *p, *q;
    for (p = a, q = a + k; p < q; p++, q--)
    {
        temp = *p; *p = *q; *q = temp;
    }
}