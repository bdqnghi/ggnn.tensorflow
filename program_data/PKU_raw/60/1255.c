
int tel(int n)
{
    if(1==n)
    return 0;
    else
    {
      int i;
    for(i=2;i<(int)sqrt(n)+1;i++)
    {
        if(n%i==0)
            break;
    }
    if(i!=(int)sqrt(n)+1)
    return 0;
    else
    return 1;
    }
}


int main()
{
    int k=0,n;
    cin>>n;
    for(int i=2;i<n+1;i++)
    {
        if(tel(i))
         if(tel(i+2)&&i+2<n+1)
            {
                cout<<i<<" "<<i+2<<endl;
                k+=1;
            }
    }
    if(0==k)
    cout<<"empty"<<endl;
   return 0;
}
