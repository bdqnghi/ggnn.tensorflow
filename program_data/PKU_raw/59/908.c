 char c[110][110] ;
 int b[100][100]={0} ;
 int n;
int pat(int m)
{
   int result=0,i=0,j=0;
   if(m==0)
   {
   for(i=0;i<n;i++)
     for(j=0;j<n;j++)
	 {
	    if(c[i][j]=='@') result++;
	 }
	 return result;
   }
   else
   {
      for(i=0;i<n;i++)
	  {
	  for(j=0;j<n;j++)
	  {
	     if(c[i][j]=='@')
		 {if(c[i][j-1]=='.') b[i][j-1]=1;
		  if(c[i][j+1]=='.') b[i][j+1]=1;
          if(c[i+1][j]=='.') b[i+1][j]=1;
		  if(c[i-1][j]=='.') b[i-1][j]=1;
		 }
	  }
	  }
      for(i=0;i<n;i++)
	  {
	  for(j=0;j<n;j++)
	  {
	     if(b[i][j]==1) c[i][j]='@';
	  }
	  }
   }
   pat(m-1);
}
int main()
{
  
   int m,i=0,j=0;
   cin>>n;
   for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   {
   cin>>c[i][j];
   }
   cin>>m;
   m -- ;
   cout<<pat(m);
   return 0;
}