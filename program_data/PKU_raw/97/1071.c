int main()
{
    int n,a[7],i=0;
    memset(a,0,sizeof(a));
    cin>>n;
    if (n / 100>=1) { a[1]=a[1]+n/100; n=n-a[1]*100;}
    if (n / 50>=1) { a[2]=a[2]+n/50; n=n-a[2]*50;}
    if (n / 20>=1) { a[3]=a[3]+n/20; n=n-a[3]*20;}
    if (n / 10>=1) { a[4]=a[4]+n/10; n=n-a[4]*10;}
    if (n / 5>=1) { a[5]=a[5]+n/5; n=n-a[5]*5;}
    if (n / 1>=1) { a[6]=a[6]+n/1; n=n-a[6]*1;}
    
    for (i=1;i<=6;i++)
     cout<<a[i]<<endl;
     
          return 0;
}