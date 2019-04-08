int main()
{
    int k , i ,j ,len;
    int str[100];
    memset( str , 0 ,sizeof( str )  );
    scanf("%d",&k);
    str[0]  = 2;
    len =1;
    for( i = 2 ;i <= k; i ++ )
    {
        for( j = 0 ; j < len ;j++ )
        str[j] = str[j]*2;
        for( j = 0 ;j < len ;j++ )
        {
        if( str[j] >= 10 )
          {str[j]-=10;        
          str[j+1] += 1;
          }
        }
         if( str[len] != 0 )
         len ++;
    }
    
    if( k == 0 )printf("1");
    else
    {
    for( i = len-1;i >= 0 ;i-- )
    printf("%d",str[i]);
     }
}
