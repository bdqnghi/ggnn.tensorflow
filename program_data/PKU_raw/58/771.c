int main()
{
    char a;int i,j,n,b=1;
    cin>>n;getchar();
    for(i=1;i<=n;i++)
    {b=1;
                     for(j=1;j<=88;j++)
                    { a=getchar();
                     if(a=='\n') break;
                     if(j==1)
                     {
                             if((64<a&&a<91)||a==95||(96<a&&a<123)){}
                             else b=0;
                             }
                     else
                     {
                         if((64<a&&a<91)||a==95||(96<a&&a<123)||(47<a&&a<58)
) {}else b=0;
                         }}
    if(b==1) cout<<1<<endl;else cout<<0<<endl;
    }                                            
                                                                                 
    
    return 0;
}
