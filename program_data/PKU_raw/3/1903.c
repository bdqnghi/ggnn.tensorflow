int main()
{
    int n=0,k=0,i=0,j=0,biaozhi=0;
    cin>>n>>k;
    int a[1000];
    for(i=0;i<n;i++)
    {
        cin>>a[i];    
    }                                         //???? 
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
               cout<<"yes";
               biaozhi=1;
               break;             
            }                
        }                                    
        if(biaozhi==1)
        {
              break;        
        }                                     //?????????????yes????? 
    }
    if(biaozhi!=1)
    {
           cout<<"no";       
    }                                          //????????no 
   
    return 0;
}
