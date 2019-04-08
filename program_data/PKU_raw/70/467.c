int main(int argc, char* argv[])
{
int j,i,n;
double d,maxd=0;
struct
{double x,y;}pl[100];

scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%lf%lf",&pl[i].x,&pl[i].y);
for(j=0;j<i;j++)
{d=sqrt((pl[i].x-pl[j].x)*(pl[i].x-pl[j].x)+(pl[i].y-pl[j].y)
		*(pl[i].y-pl[j].y));
if(d>maxd)
maxd=d;
}
}
printf("%.4lf\n",maxd);


	return 0;
}