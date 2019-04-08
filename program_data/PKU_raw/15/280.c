
int n;
int map[1010][1010];

void init();
void work();

int main()
{
    init();
    work();
    return 0;
}

void init()
{
     int i,j;
     cin>>n;
     for (i=0;i<n;i++)
     {
         for (j=0;j<n;j++)
         {
             cin>>map[i][j];
         }
     }
}

void work()
{
     int sx,sy,ex,ey,f,i,j;
     sx=sy=0;
     ex=ey=n-1;
     f=0;
     for (i=0;i<n;i++)
     {
         for (j=0;j<n;j++)
         {
             if (map[i][j]==0)
             {
                sx=i;
                sy=j;
                f=1;
                break;
             }
         }
         if (f) break;
     }
     f=0;
     for (i=n-1;i>=0;i--)
     {
         for (j=n-1;j>=0;j--)
         {
             if (map[i][j]==0)
             {
                ex=i;
                ey=j;
                f=1;
                break;
             }
         }
         if (f) break;
     }
     cout<<(ex-sx-1)*(ey-sy-1)<<endl;
}
