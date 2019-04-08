int main()
{
    int hang[6][6],lie[6][6],a[6][6];
    int i , j ,k ,hmax= -1000000,lmin= 1000000;
    int hangh,hangl,lieh,liel,temp = 0;
    int n = 5;
    memset( hang,0,sizeof(hang) );
    memset( lie,0,sizeof( lie) );
    for( i = 1;i <= n;i++ )
    for( j = 1;j <= n;j++ )
    scanf("%d",&a[i][j]);
    for( i = 1;i <= n;i++ )
    {
         for( j = 1;j <= n;j++ )
        {
         if( a[i][j]>hmax )
        {
          hangh = i;
          hangl = j;
          hmax = a[i][j]; 
        } 
        } 
        hang[hangh][hangl] = 1;
        hmax = -1000000;
    }
     for( i = 1;i <= n;i++ )
    {
     for( j = 1;j <= n;j++ )
    {
          if( a[j][i] <lmin ) 
          {
             lieh = j;
             liel = i;
             lmin = a[j][i];
          }
    }
    lie[lieh][liel] = 1;
    lmin = 1000000;
    }
    for( i = 1;i <= 5;i++ )
    for( j = 1;j <= 5;j++)
    {
    if(hang[i][j]==1 &&lie[i][j] == 1)
    {printf("%d %d %d\n",i,j,a[i][j]);
    temp ++;} 
    }
    if(temp == 0)
    printf("not found");
}
