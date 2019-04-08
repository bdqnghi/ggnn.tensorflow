int main()
{
     char str1[252],str2[252];
     int a[300],b[300],c[300];
     memset( a,0,sizeof(a) );
     memset( b,0,sizeof(b) );
     memset( c,0,sizeof(c) );
     int i, j , k , n,l1,l2,l3;
     gets(str1);
     gets(str2);
     l1 = strlen(str1);
     l2 = strlen(str2);
     for( i = l1-1 ;i >=0;i-- )
     a[l1-i] = str1[i] - '0';
     for( i = l2-1; i >=0;i--) 
     b[l2-i] = str2[i] - '0';
     if( l1>=l2 )
     l3 = l1;
     else l3 = l2;
     for( i = 1;i <= l3;i++ )
     {
     c[i] += a[i] +b[i];
     if( c[i]>=10 )
     {
     c[i+1]++;
     c[i]-=10;
     }
     }
     for( k = l3+1;k>=0;k-- )
     {if( c[k]!= 0  )break;}
     if( k <= 0 )printf("0");
     else
     {
     for( i = k ; i>0;i-- )
     printf( "%d",c[i] );
     }    
}
