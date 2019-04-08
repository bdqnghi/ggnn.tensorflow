int main()
{
int a[100][100],b[100][100],c[100][100];
int x1,y1,x2,y2;
int j1,j2,j3,j4,i1,i2,i3,i4;
memset(c,0,sizeof(c));
scanf("%d %d",&x1,&y1);
for (j1=0;j1<=x1-1;j1++)
{
for(j2=0;j2<=y1-1;j2++)
{
scanf("%d ",&a[j1][j2]);
}
}
scanf("%d %d",&x2,&y2);
for(j3=0;j3<=x2-1;j3++)
{
for(j4=0;j4<=y2-1;j4++)
{
scanf("%d ",&b[j3][j4]);
}
}
for(i1=0;i1<x1;i1++)
{
for(i2=0;i2<y2;i2++)
{
for(i3=0;i3<y1;i3++)
{
c[i1][i2]=c[i1][i2]+a[i1][i3]*b[i3][i2];
}
if (i2==y2-1)
printf("%d\n",c[i1][i2]);
else
printf("%d ",c[i1][i2]);
}
}
}