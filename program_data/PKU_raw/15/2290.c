int main()
{
    int n=0,i=0,j=0,h1=0,l1=0,h2=0,l2=0,s=0;
    cin>>n;
    int a[n][n];
    for(i=0;i<=n-1;i++)//?? 
    {
        for(j=0;j<=n-1;j++)
        {
            cin>>a[i][j];                  
        }                   
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
           if(a[i][j]==0)
           {h1=i+1;l1=j+1;goto loop;}                 
        }                   
    }
loop:   for(i=n-1;i>=0;i--)
        {
           for(j=n-1;j>=0;j--)
           {
              if(a[i][j]==0)         
              {h2=i+1;l2=j+1;goto loop2;}          
           }                   
        }   
loop2:   s=(h2-h1-1)*(l2-l1-1); 
cout<<s;    
return 0;    
}