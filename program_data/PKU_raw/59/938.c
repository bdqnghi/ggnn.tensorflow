main()
{
int n,i,j,k,m;
char p[150][150];
char a[150][150];
for(i=0;i<150;i++)
   for(j=0;j<150;j++)
    {p[i][j]='0';a[i][j]='0';}
  
    scanf("%d",&n);
    i=1;j=1;
for(i=1;i<n+1;i++)
    
      {scanf("%s",p[i]);
          for(j=n;j>=1;j--)
             {
                           p[i][j]=p[i][j-1];
                           
                           }
                           p[i][0]='0';
      //printf("%c\n",p[i][j]);
      }

scanf("%d",&m);
//printf("%d\n",m);
   for(k=0;k<m-1;k++)
    {
 for(i=1;i<n+1;i++)  
  for(j=1;j<n+1;j++)
    {if(p[i][j]!='#')
      
        if(p[i+1][j]=='@'||p[i][j+1]=='@'||p[i-1][j]=='@'||p[i][j-1]=='@')
                  {a[i][j]='!';}
                  }  
        for(i=1;i<n+1;i++)  
      for(j=1;j<n+1;j++)           
     if(a[i][j]=='!')
             {p[i][j]='@';a[i][j]='0';}
}
int sum=0;
for(i=1;i<n+1;i++)
  for(j=1;j<n+1;j++)
   if(p[i][j]=='@')
    sum++;
    printf("%d",sum);
    
}
