

int main()
{
    int n,i,j,k;
    int sumpow=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       if( ( (i%7) != 0 ) && ( (i%10) != 7 ) && ( ( (i/10)%10 ) != 7 ) )
       {
           sumpow=sumpow+i*i;
       }
    }
    cout<<sumpow;
   return 0;
}