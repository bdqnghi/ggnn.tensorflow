int main()
{
    int n,m;
    cin>>n>>m;
    int a[100][100]={0};
    int *p=a[0];
    for (p=a[0];p<a[0]+n*m;p++)
    {
        cin>>*p;       
    }
    if(n==1||m==1)
    {
       for(int k=0;k<n*m-1;k++)                                //????????????????????n+m-1 
       {
               for(int i=0;i<n;i++)                            //?????????? 
        {
            for(p=a[0]+m*i;p<a[0]+m*(i+1);p++)
            {
                   if(((i+p-a[0]-m*i)==k)&&(p!=a[0]+n*m-1))
                   {
                           cout<<*p<<endl;             
                   }                           
            }
         }
       } 
       cout<<*(a[0]+n*m-1);          
    }
    else
    {
    for(int k=0;k<n*m-2;k++)                                       //???????????????????n+m-2 
    {
      for(int i=0;i<n;i++)
      {
            for(p=a[0]+m*i;p<a[0]+m*(i+1);p++)
            {
                   if(((i+p-a[0]-m*i)==k)&&(p!=a[0]+n*m-1))
                   {
                           cout<<*p<<endl;             
                   }                           
            }
      }
    }  
    //for(p=a[0]+m*(n-1);p<a[0]+m*n-1;p++) cout<<*p<<endl;
    cout<<*(a[0]+m*n-1);
    }
 
    return 0;
} 
