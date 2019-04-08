main ()
{int x1,x2,y1,y2;
int i,j,k;
scanf("%d %d",&x1,&y1);
int a[x1][y1];
for(i=0;i<x1;i++)
{
for(j=0;j<y1;j++)
scanf("%d",&a[i][j]);
}
scanf("%d %d",&x2,&y2);
int b[x2][y2];
for(i=0;i<x2;i++)
{
for(j=0;j<y2;j++)
scanf("%d",&b[i][j]);
}
int c[x1][y2];
for(i=0;i<x1;i++)
{
for(j=0;j<y2;j++)
{c[i][j]=0;
for(k=0;k<y1;k++)
{c[i][j]=c[i][j]+(a[i][k])*(b[k][j]);
//printf("%d %d %d\n",i,j,c[i][j]);
}
}
}
for(i=0;i<x1;i++)
{
for(j=0;j<y2;j++)
{printf("%d",c[i][j]);
if((y2-1)!=j)
printf(" ");
else
printf("\n");}
}

} 