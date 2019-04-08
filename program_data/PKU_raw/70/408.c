void main()
{double a[10][2],dis,t;
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%lf %lf",&a[i][0],&a[i][1]);
dis=(a[0][0]-a[1][0])*(a[0][0]-a[1][0])+(a[0][1]-a[1][1])*(a[0][1]-a[1][1]);
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
{t=(a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]);
if(dis<t) dis=t;}
printf("%.4f\n",sqrt(dis));
}
