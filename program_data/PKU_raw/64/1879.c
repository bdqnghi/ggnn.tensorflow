double s[10][10];
int c[2];
int min(int n)
{int i,j;
double m=-1;
for (i=0;i<n-1;i++)
for (j=i+1;j<n;j++)
if (s[i][j]>m) {c[0]=i;c[1]=j;m=s[i][j];}
}
int main()
{int n,i,j,ll;
scanf("%d",&n);
int x[n],y[n],z[n];
for (i=0;i<n;i++)
scanf ("%d %d %d",&x[i],&y[i],&z[i]);
for (i=0;i<n-1;i++)
for (j=i+1;j<n;j++)
{s[i][j]=1.0*(x[i]-x[j])*(x[i]-x[j])+1.0*(y[i]-y[j])*(y[i]-y[j])+1.0*(z[i]-z[j])*(z[i]-z[j]);
s[i][j]=sqrt(s[i][j]);
}
for (i=0;i<(n-1)*n/2;i++)
{min(n);
printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[c[0]],y[c[0]],z[c[0]],x[c[1]],y[c[1]],z[c[1]],s[c[0]][c[1]]);
s[c[0]][c[1]]=-1;
} 
return 0;
}
