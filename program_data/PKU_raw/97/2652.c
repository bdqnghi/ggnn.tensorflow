int main()
{
    int n=0,i=0;
    int a[6]={0};
    cin>>n;
    a[0]=n/100;
    n=n-a[0]*100;
    a[1]=n/50;
    n=n-a[1]*50;
    a[2]=n/20;
    n=n-20*a[2];
    a[3]=n/10;
    n=n-10*a[3];
    a[4]=n/5;
    n=n-5*a[4];
    a[5]=n/1;
    for(i=0;i<6;i++)
    cout<<a[i]<<endl;
    cin.get();
    cin.get();
    return 0;
    }
