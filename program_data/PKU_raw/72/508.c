int main ()
{
    int a[22][22],b[400][2];
    int n,m,num=0,i=0,j=0;
    scanf("%d %d",&m,&n);
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
             scanf("%d",&a[i][j]);
            } 
        }
        for(j=0;j<n+2;j++)
        {
            a[0][j]=0;
            a[m+1][j]=0; 
        } 
        for(i=1;i<=m;i++)
        {
            a[i][0]=0;
            a[i][n+1]=0; 
        } 
        for(i=1;i<=m;i++)
        {   
            for(j=1;j<=n;j++)
            { 
                if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]) 
                {  
                   num+=1;
                   b[num-1][0]=i-1;
                   b[num-1][1]=j-1; 
                }
            } 
        }   
      for(i=0;i<num;i++)
      {
          
              printf("%d %d\n",b[i][0],b[i][1]);
          
      } 
    return 0; 
}
 
