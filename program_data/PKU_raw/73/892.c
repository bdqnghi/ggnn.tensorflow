int max(int a,int b)
{
  int x;
  x=a>b ? a:b;
  return x;
}
int min(int a,int b)
{
  int x;
  x=a<b ? a:b;
  return x;    
}  

main()
{
int a[5][5];
int b[5],c[5];
int i,j,r=0;
for(i=0;i<5;i++)
  {   for(j=0;j<5;j++)
      scanf("%d",&a[i][j]);  }

printf("\n");  
for(i=0;i<5;i++)      
  b[i]=max(a[i][0],max(a[i][1],max(a[i][2],max(a[i][3],a[i][4]))));
for(j=0;j<5;j++)      
  c[j]=min(a[0][j],min(a[1][j],min(a[2][j],min(a[3][j],a[4][j]))));

for(i=0;i<5;i++)
  {
     for(j=0;j<5;j++)
       {
          if(b[i]==c[j]) 
          {
            printf("%d %d %d",i+1,j+1,b[i]);
            r=1;
          } 
       }   
  }          
if(r==0)  printf("not found");
}