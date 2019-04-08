int main()
{
    int n;
    int a[100000];
    int k;
    scanf("%d",&n);
    int i,j,num=0,count=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
           if(a[i]!=k)
           num++;
    }
    for(i=0;i<n;i++)
    {
           if(a[i]!=k)
           {
                      count++;
                      if(count==num)
                      printf("%d",a[i]);
                      else
                      printf("%d ",a[i]);
           }
    }
}