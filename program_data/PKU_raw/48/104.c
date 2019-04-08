//??? ??? 1000010334 
//???????????????????? 
//??????????? 
int main()
{
    int end[11][11];  //???????
    int start[11][11];  //???????? 
    int b[5][11][11];
    int m=0;    //?????????
    int n=0;  //????
    
    for(int i=0;i<11;i++)
    {
       for(int j=0;j<11;j++)
       {
          start[i][j]=0;
          end[i][j]=0;
          for(int k=0;k<5;k++)
          {
             b[k][i][j]=0;
          }   
       }
    }     
    cin>>m>>n;
    start[5][5]=m;
    b[0][5][5]=m;
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=9;i++)
        {
            for(int j=1;j<=9;j++)
            {
               for(int p=i-1;p<=i+1;p++)
               {
                  for(int q=j-1;q<=j+1;q++)
                  {
                      if(p==i&&q==j)
                      {
                         b[k][p][q]=b[k][p][q]+b[k-1][p][q]*2;
                      }
                      else
                      { 
                         b[k][i][j]=b[k][i][j]+b[k-1][p][q];
                      }
                      
                  }
               }
            }
        }
        /*
        for(int i=1;i<=9;i++)
        {
         for(int j=1;j<=9;j++)
         {
            if(j==1)  cout<<b[k-1][i][j];
            else   cout<<" "<<b[k-1][i][j];
         }
         cout<<endl;
       }
       */
    }
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
           end[i][j]=b[n][i][j];
        }
    }
    for(int i=1;i<=9;i++)
    {
      for(int j=1;j<=9;j++)
      {
          if(j==1)  cout<<end[i][j];
          else   cout<<" "<<end[i][j];
      }
      cout<<endl;
    }

    return 0; 
}
