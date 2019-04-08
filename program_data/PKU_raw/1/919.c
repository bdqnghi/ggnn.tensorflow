int total=0;
int divide(int k,int number)
{
    if(number==1){total++;return 0;}
    int i;
    for(i=k;i<=number;i++)
    {
       if(number%i==0)
       divide(i,number/i);
    }return 0;
}
int main()
{
    int i,n;
    cin>>n;
    int num[n];
    for(i=0;i<n;i++)
      cin>>num[i];
    for(i=0;i<n;i++)
    {total=0;
     divide(2,num[i]);
     cout<<total<<endl;
    }
    cin>>n;
    return 0;
} 
