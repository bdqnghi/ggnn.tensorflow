

int main()
{
    int num[10][10];    //?? 1 ? 9 
    int next[10][10];
    int m,n;
    int i,j,k;
    
    for(i=0;i<10;i++)
       for(j=0;j<10;j++)
          {num[i][j]=0;
           next[i][j]=0;}
       
    cin>>m;   //??num?5??5?????m? 
    cin>>n;   //n? 
    
    num[5][5]=m;
    for(i=0;i<n;i++)
         {
          for(j=1;j<9;j++)
              for(k=1;k<9;k++)
                  if(num[j][k]!=0)
                       {
                        next[j][k]+=num[j][k]*2;
                        next[j-1][k]+=num[j][k];           
                        next[j+1][k]+=num[j][k];
                        next[j][k-1]+=num[j][k];
                        next[j][k+1]+=num[j][k];
                        next[j-1][k-1]+=num[j][k];
                        next[j-1][k+1]+=num[j][k];
                        next[j+1][k+1]+=num[j][k];
                        next[j+1][k-1]+=num[j][k];
                        }
                        
          for(j=0;j<10;j++)
               for(k=0;k<10;k++)
               {num[j][k]=next[j][k];              
                next[j][k]=0;}    
          }
    
    for(i=1;i<10;i++)
         {
          for(j=1;j<9;j++)
              cout<<num[i][j]<<" ";
          cout<<num[i][j]<<endl;} 
    return 0;
}
