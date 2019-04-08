int main()
{
    int m,x100,x50,x20,x10,x5,x1;
    cin>>m;
    for(x100=1;m>=100;x100++)
    {
                    m=m-100;
    }
    
    for(x50=1;m>=50;x50++)
    {
                    m=m-50;
    }
    
    for(x20=1;m>=20;x20++)
    {
                    m=m-20;
    }
    
    for(x10=1;m>=10;x10++)
    {
                    m=m-10;
    }
    
    for(x5=1;m>=5;x5++)
    {
                    m=m-5;
    }
   
    x1=m;
    
    cout<<x100-1<<endl;
    cout<<x50-1<<endl<<x20-1<<endl<<x10-1<<endl<<x5-1<<endl<<x1;
                    

   return 0;
}
