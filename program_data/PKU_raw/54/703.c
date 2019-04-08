int main()
{
    int apple[1000]={0};
    int n,i,k;
    cin>>n>>k;
    apple[n]=k;
    do
    {
       apple[n]+=n;
       for(i=n;i>=1;i--)
       {
           if(apple[i]%(n-1)!=0)
           break;
           else
           {
              apple[i-1]=apple[i]*n/(n-1)+k; 
           }             
       }
    }while(i>1);
    cout<<apple[1]<<endl;
    return 0;
}
