int main()
{
    int i,n,j,sum=0;
    cin>>n;
    for(i=1;i<=n;i++){
      if(i%7==0||i%10==7||(i>69&i<80))j=0;
          else j=i*i;
      sum=sum+j;
    }
    cout<<sum<<endl;
    return 0;
}