void virus(char a[][100],int n)
{
     char b[100][100];
     for(int i=1;i<=n;i++)
     {
             for(int j=1;j<=n;j++)
             {
                      b[i][j]=a[i][j];        
             }
     }                                                               //?????????????????? 
     for(int i=1;i<=n;i++)
     {
           for(int j=1;j<=n;j++)
           {
                  if(a[i][j]=='@'&&a[i][j-1]=='.')
                  {                           
                       b[i][j-1]='@';                           
                  } 
                  if(a[i][j]=='@'&&a[i][j+1]=='.')
                  {
                      
                       b[i][j+1]='@';                           
                  }
                  if(a[i][j]=='@'&&a[i-1][j]=='.')
                  {
                      
                       b[i-1][j]='@';                           
                  }
                  if(a[i][j]=='@'&&a[i+1][j]=='.')
                  {
                      
                       b[i+1][j]='@';                           
                  }                                                  //???????????? 
           }  
     }
     for(int i=1;i<=n;i++)
     {
          for(int j=1;j<=n;j++)
          {
                   a[i][j]=b[i][j];        
          }            
     }                                                               //????????????  
}
int main()
{
    int n,m,j,i,sum=0;
    char a[100][100];
    cin>>n;
    for( i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
             cin>>a[i][j];   
        }    
    }
    cin>>m;
    for(i=1;i<m;i++)
    {
         virus(a,n);           
    }                                                                //?????? 
    for(i=1;i<=n;i++)
    {
         for(j=1;j<=n;j++)
         {
                if(a[i][j]=='@')
                {
                     sum++;           
                }          
         }            
    }
    cout<<sum;                                                        //?? 
    
    return 0;
}
