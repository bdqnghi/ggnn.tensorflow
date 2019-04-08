char a[105][105]={'\0'},b[105][105]={'\0'};
int n;
void renshu(int m,char a[105][105])
 {
     int t=0,i,j;
if(m==1)
{   
  t=0;
   for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
     {
      if(a[i][j]=='@')
       {t++;}
      }
       cout<<t<<endl;
}
 else
  {
   for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
     if(a[i][j]=='@')
       {  b[i][j]='@';
         if(a[i+1][j]=='.') b[i+1][j]='@';
         if(a[i-1][j]=='.') b[i-1][j]='@';
         if(a[i][j-1]=='.') b[i][j-1]='@';
         if(a[i][j+1]=='.') b[i][j+1]='@';
        }
   for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
     if(b[i][j]=='@')
       {  
         a[i][j]=b[i][j];
        }
    renshu(m-1,a); 
  }
}
int main()
{ 
 int m,i,j;
 cin>>n;
 for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {
      cin>>a[i][j];
    }
 cin>>m;
 renshu(m,a);
 
 return 0;
}
 
