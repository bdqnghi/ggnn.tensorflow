int main()
{
 int n,i=0,j=0;
 cin>>n;
 char res[101][101],res2[101][101];
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   cin>>res[i][j];
  }
 }
 int sum=0;
 int m,k=1;
 cin>>m;
 for(k=1;k<m;k++)
 {
  for(int s = 0;s<n;s++)
  {
   for(int t = 0;t<n;t++)
   {
    res2[s][t] = res[s][t];
   }
  }
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
    if (res[i][j]=='@')
    {
     if(i-1>=0)
     {
      if(res[i-1][j]=='.') 
      {
       res2[i-1][j]='@';
       res2[i][j]='@';
      }
     }
     if(i+1<n)
     {
      if(res[i+1][j]=='.')   
      {
       res2[i+1][j]='@';
       res2[i][j]='@';
      }
     }
     if(j-1>=0)
     {
      if(res[i][j-1]=='.') 
      {
       res2[i][j-1]='@';
       res2[i][j]='@';
      }
     }
     if(j+1<n)
     {
      if(res[i][j+1]=='.') 
      {
       res2[i][j+1]='@';
       res2[i][j]='@';
      }
     }
    }
   }
  }
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
    {
    res[i][j]=res2[i][j];
    }
  }
 }
 for(int i = 0;i<n;i++)
 {
  for(int j = 0;j<n;j++)
  {
   if(res[i][j]=='@')
   {
    sum+=1;
   }
  }
 }
 cout<<sum;
 return 0;
}
