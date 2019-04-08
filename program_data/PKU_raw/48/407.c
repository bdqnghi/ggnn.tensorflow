main()
{
 int a[10][10]={0},b[10][10]={0};
 int i,j,k,m,n;
 scanf("%d%d",&m,&n);
 a[5][5]=m;
 for(k=0;k<n;k++)
 {
 for(i=1;i<=9;i++)
 for(j=1;j<=9;j++)
 {
  if(a[i][j]!=0) 
  {
   int s=2*a[i][j];int t=a[i][j];
   b[i][j]+=s;
   b[i][j+1]+=t;b[i][j-1]+=t;b[i+1][j+1]+=t;b[i+1][j-1]+=t;b[i+1][j]+=t;b[i-1][j]+=t;b[i-1][j+1]+=t;b[i-1][j-1]+=t;           
                }               
                  }               
   for(int p=1;p<=9;p++)
   {
    for(int q=1;q<=9;q++)
    {
     a[p][q]=b[p][q];
     b[p][q]=0;       
            }       
           }              
                 }
                 for(i=1;i<=9;i++)
                 for(j=1;j<=9;j++)
                 {printf("%d",a[i][j]);
                 if(j==9)
                 {printf("\n");}
                 else{printf(" ");}}   
 
      }
