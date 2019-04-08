int main()
{   int prime(int n);
    int n;
    scanf("%d", &n);
    int i,j;
    for(i=6;i<=n;i=i+2)
    {
                      for(j=3;j<=n/2;j=j+2)
                      {
                                         if(prime(j)==1&&prime(i-j)==1)
                                         {
                                               printf("%d=%d+%d\n", i, j, i-j);
                                               break;
                                         }
                      }
    }
    return 0;
}
                                               
                                         
                                         
                                         
                                         
            int prime(int n)
    {
        int i;
        int flag=0;
        for(i=2;i<=sqrt(n);i++)
        {
                               if(n%i==0)
                               {
                                         flag++;
                                         break;
                               }
        }    
        if(flag==1)
        {
        return 0;
        }
        else
        {
        return 1;
        }
}
                              
