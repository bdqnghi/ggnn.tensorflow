int main()
{
    int n,i,c,sum,m=0;
    cin >> n;
    for(sum=0,i=1;i<=n;i++)
    {
                           for(c=1,m=0;c<=i;c=c*10)
                           {
                                               if((((i/c)-7)%10==0)||(i%7==0))
                                               {
                                                                  m=1;
                                                                  break;
                                               }
                           }
                           if(m!=1)
                           sum=sum+i*i;
                           }
                           cout << sum <<endl;
                           return 0;
                           }