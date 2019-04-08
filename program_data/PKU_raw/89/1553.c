main()
{
         int n;
         int i,j=0;
         int x,y;
         int mingliu=-2;
         int p[100000][2];
         scanf("%d",&n);
         for(i=0;;i++)
         {
                  for(j=0;j<2;j++)
                  scanf("%d",&p[i][j]);
                  if(p[i][0]==0&&p[i][1]==0)
                  break;
         }
            for(y=0;y<i;y++)
         {
                  for(x=0;x<i;x++)
                  {


                                    if(p[y][1]==p[x][0])
                           {
                                    y=y+1;
                                    x=0;
                           }
                           else if (p[y][1]!=p[x][0]&&p[x][1]==p[y][1])
                            j=j+1;
                  }


                           if(j==n-1)
                           {
                           mingliu=p[y][1];
                           break;
                           }
                           else j=0;

         }
         if (mingliu==-2)
         printf("NOT FOUND");
         else printf("%d",mingliu);
}
