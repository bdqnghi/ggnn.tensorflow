

int main()
{int i,j,n,t=0;
double x ,a[1000],b[1000],c[1000][1000];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%lf %lf",&a[i],&b[i]);
x=0;
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{c[i][j]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
if(x<c[i][j])
x=c[i][j];
                }
                }



printf("%.4f",(float)x);
getchar();getchar();getchar();

    }