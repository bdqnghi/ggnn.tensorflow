
int main()
{
    int n, k;
    int i;
    int total;
    int final;
    int count = 0;
    
    int calc(int total, int n, int k);
    
    scanf("%d%d", &n, &k);
    
    for(final = k; ; final++)
    {
              count = 0;
              total = final * n + k;
              if(total % n == k)
                             count++;
              
              for(i = 2; i <= n; i ++)
              {
                    total = calc(total, n, k);
              
                    if(total % n == k)
                             count++;
              }
              
              if(count == n)
              {
                       printf("%d", total);
                       break;
              }
              
    }
    
       return 0;
}

int calc(int total, int n, int k)
{
    return (total * n / (n - 1) + k);
}
        
        
    
         
    
    
    
