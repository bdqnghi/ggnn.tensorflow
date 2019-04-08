int main()
{
    int n;
    int a,b=0;
    int arr[100001];
    scanf("%d",&n);
    for( int i=0;i<n;i++ )
    {
         scanf("%d",&arr[i]);     
    }
    scanf("%d",&a);
    for( int i=0;i<n;i++ )
    {
         if( arr[i]!=a )
         {
             b++;
         }
    }
    for( int i=0;i<n;i++ )
    {
         if( arr[i]!=a )
         {
             if( b==1 )
             {
                 printf("%d\n",arr[i]);
                 break;
             }
             else printf("%d ",arr[i]);
             b--;
         }
    }
}
