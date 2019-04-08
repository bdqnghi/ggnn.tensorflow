int main()
{
    int n,i,sum=0,shi,ge;
    cin>>n;
    shi=n/10;ge=n-10*shi;
    for(i=1;i<=n;i++)
    {
     shi=i/10;ge=i-10*shi;
     if(i%7!=0&&shi!=7&&ge!=7)
     sum=sum+i*i;               
    }    
    cout<<sum;
    return 0;
}
