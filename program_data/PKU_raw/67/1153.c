int main()
{int n,i,j;
int a[100][2];
scanf("%d",&n);
for(i=1;i<=n;i++)
{    for(j=1;j<=2;j++)
{         scanf("%d",&a[i][j]);}}
double x=1.0*a[1][2]/a[1][1];
for(i=2;i<=n;i++)
{    double cz=1.0*a[i][2]/a[i][1]-x;
     if(cz>0.05)
	 {printf("better\n");}
     else if(cz<-0.05)
	 {printf("worse\n");}
     else
	 {printf("same\n");}}
return 0;}