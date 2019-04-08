int main()
{
    int *a;
    int n,i;
    int f(int x);
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        printf("%d\n",f(a[i]));
    }

}
 int f(int x)
    {
        if(x==1||x==2)
        return(1);
        else
        return(f(x-1)+f(x-2));
    }
