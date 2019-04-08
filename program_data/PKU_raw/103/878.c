int main()
{
     char str[1001];
     int len , i,temp ,sum = 1 ,k = 1;
     scanf("%s",str);
     len = strlen( str );
      temp = 0;
     for( i = 0 ;i <= len+1 ;i ++  )
     {    
         while( str[k] == str[temp] || str[k] == str[temp]+32 || str[k] == str[temp ] - 32 )
           {          
             sum ++;
             k++;
           }

           if( str[temp] >= 'a' && str[temp] <= 'z')
           str[temp]-= 32;
           printf( "(%c,%d)",str[temp],sum );
           sum = 1;
           temp = k  ; 
           i = k+1;
           k = k+1;
     }
}
