int main()
{
    int n,i,j,flag=0;
    int *p;
    scanf("%d",&n);
    p=(int *)malloc(sizeof(int)*n);
    scanf("%d",&p[0]);
    printf("%d",p[0]);
    for(i=1;i<=n-1;i++)
    {
         scanf("%d",&p[i]);
         for(j=0;j<i;j++)
         {
              if(p[i]==p[j])
              flag=1;
         }
         if(flag==0)
         printf(" %d",p[i]);
         flag=0;
    }
    return 0;
}
     
     
