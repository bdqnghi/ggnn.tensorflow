/*
Name:???
ID:1200012842
Email:443972553@qq.com
*/
int main()
{
    int n;
    cin>>n;
    while (n>1)
    {
          if (n%2)
          {
             printf("%d*3+1=%d\n",n,n*3+1);
             n=n*3+1;
             }
          else
          {
              printf("%d/2=%d\n",n,n/2);
              n=n/2;
              }
          }
    cout<<"End";
    return 0;
    }
