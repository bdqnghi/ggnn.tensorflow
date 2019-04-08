main()
{
int x1,y1,x2,y2;
scanf("%d %d",&x1,&y1);
int a[101][101];
int i,j;
for(i=0;i<x1;i++)
{
 for(j=0;j<y1;j++)
 {
 scanf("%d",&a[i][j]);
 }
}
scanf("%d %d",&x2,&y2);
int b[101][101];

for(i=0;i<x2;i++)
{
 for(j=0;j<y2;j++)
 {
 scanf("%d",&b[i][j]);
 }
}

int c[101][101];
int q;
for(i=0;i<x1;i++)
{
 for(j=0;j<y2;j++)
 {
  c[i][j]=0;
  for(q=0;q<y1;q++)
  {
   c[i][j]=c[i][j]+a[i][q]*b[q][j];
  }
 }
}  
 for(i=0;i<x1;i++)               //???????????c[][]???????????????????c[][]??????? 
  {
   if(y2==1) printf("%d\n",c[i][0]);
   else
   {for(j=0;j<y2;j++)
   {
    if(j==0) printf("%d",c[i][j]);
    else if(j==y2-1) printf(" %d\n",c[i][j]);
    else printf(" %d",c[i][j]);
   }}
  }

getchar();
getchar();
}
