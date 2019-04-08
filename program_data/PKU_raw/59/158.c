int main()
{
   char maze[150][150]={'\0'},maze1[150][150]={'\0'};
   int i,j,n,m,k,num=0;
   cin>>n;
   for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
      cin>>maze[i][j];
   cin>>m;
   k=1;
   for(;;)
   {
          if(k>=m)  break;
   for(i=1;i<=n;i++)   
   for(j=1;j<=n;j++)
   {     
        maze1[i][j]=maze[i][j];
   
      }
   for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
   {
       
       if(maze[i][j]=='@')
       {
          if(maze[i+1][j]=='.')   maze1[i+1][j]='@';
          if(maze[i-1][j]=='.')   maze1[i-1][j]='@';
          if(maze[i][j+1]=='.')   maze1[i][j+1]='@';
          if(maze[i][j-1]=='.')   maze1[i][j-1]='@';
       }
   }
   for(i=1;i<=n;i++) 
   for(j=1;j<=n;j++)
   {     
        maze[i][j]=maze1[i][j];
        
      }
    k++;
   }
   for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
   {     
      if(maze[i][j]=='@')  num++;
      }
      cout<<num;
    
    
    
    return 0;
}
