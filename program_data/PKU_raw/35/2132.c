int main ()
{int i,j,n,m,t=0;
scanf ("%d,%d",&n,&m);
int a[n+2][m+2];
for (i=0;i<n;i++)
for (j=0;j<m;j++)
scanf ("%d",&a[i][j]);
for (i=0;i<n;i++) {a[i][m]=a[i][0];a[i][m+1]=0;}
for (j=0;j<m;j++) {a[n][j]=a[0][j];a[n+1][j]=0;}
for (i=0;i<n;i++) 
for (j=0;j<m;j++)
{if (a[i][j]>a[i][m]) {a[i][m]=a[i][j];a[i][m+1]=j;}
if (a[i][j]<a[n][j]) {a[n][j]=a[i][j];a[n+1][j]=i;}
}
for (i=0;i<n;i++)
if (a[n+1][a[i][m+1]]==i) {printf ("%d+%d\n",i,a[i][m+1]);t=1;}
if (t==0) printf ("No\n");
return 0;
}