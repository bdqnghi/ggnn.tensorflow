
int main()
{
    int n,t,num=-1,a[500];
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&t);
        if (t%2==1){num++;a[num]=t;}// choose odd number 
    }
    sort(a,a+num+1);//sort the numbers
    printf("%d",a[0]);
    for (int i=1;i<=num;i++) printf(",%d",a[i]);// print 

    return 0;
}
