int main()
{
    int n,i,a[100];
    cin>>n;
    a[0]=n;
    for(i=0;i<100;i++)
    {
        if(a[i]%2==1&&a[i]!=1)  
        {
           a[i+1]=a[i]*3+1;
            cout<<a[i]<<"*3+1="<<a[i+1]<<endl;
            }
        if(a[i]%2==0)
          {
            a[i+1]=a[i]/2;
            cout<<a[i]<<"/2="<<a[i+1]<<endl;
            }
        if(a[i]==1)
        {
           cout<<"End";
           break;
           }
        }
        return 0;
        }