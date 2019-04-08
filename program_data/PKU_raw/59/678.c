int main()
{
  int n=0,m=0,i=0,j=0,k=0,ge=0;
  char s[100][100],s1[100][100];
  cin>>n;
  for(i=0;i<=99;i++)//
  {
     for(j=0;j<=99;j++)
     {
        s[i][j]='\0';                  
     }                  
  }
  for(i=0;i<=99;i++)//
  {
     for(j=0;j<=99;j++)
     {
        s1[i][j]='\0';                  
     }                  
  }
  
  for(i=0;i<=n-1;i++)//?? 
  {
     for(j=0;j<=n-1;j++)
     {
        cin>>s[i][j];                   
     }                   
  }
  cin>>m;
  for(k=1;k<=m-1;k++)
  {
       for(i=0;i<=99;i++)//
        {
           for(j=0;j<=99;j++)
            {
            s1[i][j]='\0';                  
            }                  
        }
       
       for(i=0;i<=n-1;i++)
       {
          for(j=0;j<=n-1;j++)
          {
             if(s[i][j]=='@')
             {
                 s1[i][j]='@';
                 if(i-1>=0)
                 s1[i-1][j]='@';
                 if(i+1<=n-1)
                 s1[i+1][j]='@';
                 if(j-1>=0)
                 s1[i][j-1]='@';
                 if(j+1<=n-1)
                 s1[i][j+1]='@';
                                
             }                   
          }                   
       }
       for(i=0;i<=n-1;i++)
       {
          for(j=0;j<=n-1;j++)
          {
             if((s1[i][j]=='@')&&(s[i][j]=='.'))  
             {s[i][j]=s1[i][j];}               
          }                   
       }
  
  
  
  
  
                   
  }
for(i=0;i<=n-1;i++)
{
  for(j=0;j<=n-1;j++)
  {
    if(s[i][j]=='@')
    ge++;                   
  }                   
}

cout<<ge;

return 0;
}