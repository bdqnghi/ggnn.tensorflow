float dis(int a[3],int b[3])
{
float d=0;
for (int i=0;i<3;i++)
   d+=(a[i]-b[i])*(a[i]-b[i]);
d=pow(d,0.5);
return d;
}

int main()
{
int n,x=0,y;
scanf("%d",&n);
int a[n][3];
y=n*(n-1)/2;
float b[y][3],m[3];
for (int i=0;i<n;i++)
   for (int j=0;j<3;j++)
      scanf("%d",&a[i][j]);
for (int i=0;i<n-1;i++)
   for (int j=i+1;j<n;j++)
      {
      b[x][0]=i;
      b[x][1]=j;
      b[x][2]=dis(a[i],a[j]);
      x++;
      }
for (int j=y-2;j>=0;j--)
   for (int i=0;i<=j;i++)
      if (b[i][2]<b[i+1][2])
      for (int k=0;k<3;k++)
         {
         m[k]=b[i][k];
         b[i][k]=b[i+1][k];
         b[i+1][k]=m[k];
         }
for (int i=0;i<y;i++)
   printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[(int)b[i][0]][0],a[(int)b[i][0]][1],a[(int)b[i][0]][2],a[(int)b[i][1]][0],a[(int)b[i][1]][1],a[(int)b[i][1]][2],b[i][2]);
}
