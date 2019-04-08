int main()
{
   int n,i,a=0,b=0,c=0;
   scanf("%d",&n);
   int sz[200][2];
   for(i=0;i<n;i++)
   {
      scanf("%d%d",&sz[i][0],&sz[i][1]);
   }
   for(i=0;i<n;i++)
   {
      if((sz[i][0]==0&&sz[i][1]==1)||(sz[i][0]==1&&sz[i][1]==2)||(sz[i][0]==2&&sz[i][1]==0))
      {
          a++;
      }
      else if(sz[i][0]==sz[i][1])
      {
          c++;
      }
      else if((sz[i][1]==0&&sz[i][0]==1)||(sz[i][1]==1&&sz[i][0]==2)||(sz[i][1]==2&&sz[i][0]==0))
      {
          b++;
       }
    }
   if(a>b)
    {
       printf("A");
    }
   else if(b>a)
    {
       printf("B");
    }
   else if(a==b)
    {
       printf("Tie");
     }
   return 0;
}