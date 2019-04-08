int with7(int x)
{
    if(x%7==0)  return 1;
    while(x>0)
    {
              if(x%10==7) return 1;
              x=x/10;
    }
    return 0;
}


int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
        if(!with7(i))
            sum+=(i*i);
    cout<<sum<<endl;
    return 0;
}
            
