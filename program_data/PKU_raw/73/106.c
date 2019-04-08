int findmin(int a[5])
{
int x=a[0],y=0;
for (int i=1;i<5;i++)
   if (a[i]<x) {x=a[i];y=i;}
return y;
}

int findmax(int a[5])
{
int x=a[0],y=0;
for (int i=0;i<5;i++)
   if (a[i]>x) {x=a[i];y=i;}
return y;
}

int main()
{
int a[5][5],b[5][5],max[5],min[5],pp=0;
for (int i=0;i<5;i++)
   for (int j=0;j<5;j++)
   {scanf("%d",&a[i][j]);b[j][i]=a[i][j];}
for (int i=0;i<5;i++)
   {
   max[i]=findmax(a[i]);
   min[i]=findmin(b[i]);
   }
for (int i=0;i<5;i++)
   if (i==min[max[i]]) {printf("%d %d %d",i+1,max[i]+1,a[i][max[i]]);pp=1;}
if (pp==0) printf("not found");
}
