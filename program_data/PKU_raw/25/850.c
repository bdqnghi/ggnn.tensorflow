int main()
{
    int a[100]={0},n,b,i,j,k;
    a[99]=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
                    for(j=0;j<100;j++)
                    {
                                      if(a[j]*2>=10)
                                      {
                                                   a[j-1]++;
                                                   b=a[j]*2-10;
                                      }
                                      if(a[j]*2<10)
                                                   b=a[j]*2;
                                      a[j]=b;
                    }
    }
    for(j=0;j<100;j++)
    {
                      if(a[j]!=0)
                      {
                                 for(k=j;k<100;k++)
                                 cout<<a[k];
                                 break;
                      }
    }
    return 0;
}