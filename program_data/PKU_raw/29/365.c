int main()
{
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
         int n;
         scanf("%d",&n);
         float s=0;
         int x=2,y=1,t;
         for(int j=1;j<=n;j++)
         {
              s=s+(float)x/y;
              t=x+y;
              y=x;
              x=t;
         }
         printf("%.3f\n",s);   
            
    }
    
    getchar();
    getchar();
}
