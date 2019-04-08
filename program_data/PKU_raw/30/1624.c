int main()
{
   int n,i,sum=0;
   cin>>n;
   for(i=1;i<n+1;i++)
   {
        if(i%7!=0)
        {
            if(i%10!=7)
             {
                 if((i/10)%10!=7)
                  {
                     sum=sum+i*i;
                   }
               }
         }
    }
    cout<<sum;
    return 0;
}
         
