int f(int i,int j,int m,int n,int a[100][100]); 
int main()
{
    int m,n,i,j,a[100][100];
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
     for(j=0;j<n;j++)
       scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
     for(j=0;j<n;j++)
       {
         if(f(i,j,m,n,a)==1)
         printf("%d %d\n",i,j);
       }
}                        
int f(int i,int j,int m,int n,int a[100][100]) 
{
    int i1,j1,k,test=1;
    int d[4][2]={-1,0,1,0,0,-1,0,1};
    for( k=0;k<4;k++)
       {
           i1=i+d[k][0];
           j1=j+d[k][1];
           if(i1>=0 && i1<m &&j1>=0 &&j1<n)
           {
             if(a[i][j]<a[i1][j1])
             {
               test=0;
               break;
             }
           }
       }
       if(test==0)
       return 0;
       else 
       return 1; 
}  