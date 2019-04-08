int main()
{
    int n,i,f,j;
    cin>>n;
    if(n<=4){cout<<"empty";return 0;}
    for (i=3;i<=n-2;i+=2)
    {
        f=1;
        for (j=2;j<i;j++)
        {
            if ((i%j==0)||((i+2)%j==0)){f=0;break;}
        }
        if (f==1)cout<<i<<' '<<i+2<<endl;
    }
    //while(1);
} 