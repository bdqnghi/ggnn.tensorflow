int main()
{
     int i ,j, height, a[ 101 ][101] , b[101][101], c[101][101] ,k,l;
     int a1 ,a2, b1 , b2;
     scanf( "%d %d",&a1 ,&a2 );
     for( i = 1; i <= a1; i ++ )
        { for( j = 1; j <= a2; j ++ )
         scanf( "%d",&a[i][j] );
        }
     scanf( "%d %d", &b1,&b2 );
     for( i = 1; i <= b1; i ++ )
        {
         for( j = 1; j <= b2; j ++ )
         scanf( "%d",& b[i][j] );
         }
     for( k = 1; k <= a1; k ++ )
     {
         for ( l = 1; l <= b2; l ++ )
           {
             for( i = 1; i <= b1; i ++ )
                  c[k][l] += a[k][i] * b[i][l];
            if( l < b2 )
            printf( "%d ", c[k][l] );   
            else
            printf( "%d", c[k][l] );
           }
           printf("\n");
     }
}
