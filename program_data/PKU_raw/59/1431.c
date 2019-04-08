int n,m,i,j,t,p,x,y,q;
 char c[2][100][100];

int main()
{
 p=0;
 cin>>n;
 for (i=1;i<=n;i++)
  for (j=1;j<=n;j++)
   cin>>c[p][i][j];
   cin>>m;m--;
 while (m>0)
   {
     q=1-p;
      for(i=1;i<=n;i++)
       for (j=1;j<=n;j++)
        {
         if (c[p][i][j]=='@')
           {
            x=i-1;y=j;
            if (c[p][x][y]!='#')c[q][x][y]='@';
            x=i+1;y=j;
            if (c[p][x][y]!='#')c[q][x][y]='@';
            x=i;y=j-1;
            if (c[p][x][y]!='#')c[q][x][y]='@';
            x=i;y=j+1;
            if (c[p][x][y]!='#')c[q][x][y]='@';
           } 
         if(
         (c[p][i][j]=='@')||(c[p][i][j]=='#'))
         c[q][i][j]=c[p][i][j];
        }
     p=q;
     m--;
   }
 t=0;
 for(i=1;i<=n;i++)
  for (j=1;j<=n;j++)
   if(c[p][i][j]=='@') t++;
 cout<<t;    
 cin>>t;
 return 0;
}
