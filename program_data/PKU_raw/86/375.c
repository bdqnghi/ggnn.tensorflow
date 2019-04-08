int main()
{
    int m, i;
    scanf("%d", &m);
    for(i=1; i<=m; i++)
    {
         int n, j, num[100], k;
         scanf("%d", &n);
         if(n==0) 
               printf("60\n");
         else
         { 
               for(j=1; j<=n; j++)
               {
                    scanf("%d", &num[j]);
               }
               for(j=1;j<=n;j++){
               if((num[j] + 3 * (j - 1))>= 60)
                         { k = 60-3*(j-1);
                          break;}
               else if((num[j]+3*j )>= 60)
                          {k = num[j];
                          break;}
                    else 
                          k = 60-3*j;
                          
              }
              printf("%d\n", k);
         }           
    }
    return 0;
}

