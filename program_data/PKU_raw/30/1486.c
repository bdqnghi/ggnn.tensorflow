int main()
{  
    int a[100][4] , i , j , n ,sum=0;
    scanf("%d",&n);
    for(i = 1 ; i <= n ; i ++ )
    { 
          a[i][2] = i % 10;  
     a[i][1] = (i -a[i][2]) / 10; 
       if( i < 7)
    {sum += i * i;}
      else if( (i % 7 == 0)|| (a[i][1] == 7)|| (a[i][2] == 7))
              { sum = sum;}
               else 
               {sum += i * i ;}
    } 
    printf("%d",sum);
    return 0;
  
}
