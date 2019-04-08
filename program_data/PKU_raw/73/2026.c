int main() 
{ 
    int a[5][5] ; 
    int flag = 0 ; 
    int b , c , d , e , f=0 , g ; 
    for(int i = 0 ;i < 5 ; i++) 
    { 
         for(int k = 0 ;k < 5 ;k++) 
         { 
              cin>>a[i][k] ; 
         } 
    } 

    for(int i = 0 ; i < 5 ; i++ ) 
    { 
         b = a[i][0] ; 
         c = 0 ; 
         for(int j = 0 ; j < 5 ; j++ ) 
         { 
              if(a[i][j] >= b) 
              { 
                   b = a[i][j] ; 
                   c = j ; 
                   f = i ; 
              } 
         } 
         if((b<=a[1][c])&&(b<=a[2][c])&&(b<=a[3][c])&&(b<=a[4][c])&&(b<=a[0][c])) 
         { 
              flag = 1 ; 
              d = b ; 
              e = c + 1; 
              g = f + 1; 
              break ; 
         } 
    } 
    if(flag == 1) 
         cout<<g<<" "<<e<<" "<<d ; 
    else 
         cout<<"not found"; 
    return 0 ; 
} 
