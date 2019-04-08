int map[110][110],n,sum;
void getmap()
{
     int i,j;
     for(i=1;i<=n;i++)
     for(j=1;j<=n;j++)
     scanf("%d",&map[i][j]);
}
int minh(int x)
{
     int i,min=100000000;
     for(i=1;i<=n;i++)
     {
                      if(min>map[x][i])
                      min=map[x][i];
     }
     return min;
}
int minl(int x)
{
     int i,min=100000000;
     for(i=1;i<=n;i++)
     {
                      if(min>map[i][x])
                      min=map[i][x];
     }
     return min;
}
void once(int a)
{
     int i,j,min;
     min=minh(1);
     for(j=1;j<=n;j++)
     map[1][j]-=min;
      
     for(i=a+1;i<=n;i++)
     {
                      min=minh(i);
                      for(j=1;j<=n;j++)
                      map[i][j]-=min;
     }min=minl(1);
      for(j=1;j<=n;j++)
      map[j][1]-=min;
     for(i=a+1;i<=n;i++)
     {
                      min=minl(i);
                      for(j=1;j<=n;j++)
                      map[j][i]-=min;
     }
     sum+=map[a+1][a+1];
     for(i=1;i<=n;i++)
     map[a+1][i]=map[i][a+1]=100000;
     
}
int main()
{
    int i,j,y=1; 
    int v,u;
    //freopen("1.txt","r",stdin);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { sum=0;
    getmap(); 
    
      //   for(u=1;u<=n;u++)
        //            {for(v=1;v<=n;v++)
        ///            printf("%d ",map[u][v]);
        //            printf("\n");
        //            }
        //            getch();
    for(j=1;j<n;j++)
    {
                    once(j);
                   // for(u=1;u<=n;u++)
                 //   {for(v=1;v<=n;v++)
                 //   printf("%6d ",map[u][v]);
                 //   printf("\n");
                 //   }
                 //   getch();
    }
    if(y==0)
    printf("\n%d",sum);
    else
    printf("%d",sum);
    y=0;
    }     
    //getch();
    return 0;
}
        
