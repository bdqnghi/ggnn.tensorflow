
int main()
{
   int a[100][100],b[100][100],c[100][100],x1,y1,x2,y2,i,j,k,s;

   scanf("%d %d",&x1,&y1);
   for(i=0;i<x1;i++)
    for(j=0;j<y1;j++)
    scanf("%d",&a[i][j]);
   scanf("%d %d",&x2,&y2);
   for(j=0;j<x2;j++)
    for(k=0;k<y2;k++)
    scanf("%d",&b[j][k]);
for(i=0;i<x1;i++)

    for(k=0;k<y2;k++)
    {
    s=0;
    for(j=0;j<y1;j++)
    s=s+a[i][j]*b[j][k];
    c[i][k]=s;
    }

for(i=0;i<x1-1;i++)
{
for(k=0;k<y2-1;k++)
printf("%d ",c[i][k]);
printf("%d\n",c[i][y2-1]);
}
for(k=0;k<y2-1;k++)
printf("%d ",c[x1-1][k]);
printf("%d",c[x1-1][y2-1]);
    return 0;
}