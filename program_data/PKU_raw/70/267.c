int main()
{ 

int n,i,j;
double Ldist,dist;
struct dis
{
	double x;
	double y;
}dis[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%lf%lf",&dis[i].x,&dis[i].y);
}
Ldist=sqrt((dis[0].x-dis[1].x)*(dis[0].x-dis[1].x)+(dis[0].y-dis[1].y)*(dis[0].y-dis[1].y));
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{dist=sqrt((dis[i].x-dis[j].x)*(dis[i].x-dis[j].x)+(dis[i].y-dis[j].y)*(dis[i].y-dis[j].y));
 if(dist>Ldist)
	 Ldist=dist;
}
}
printf("%.4lf",Ldist);
return 0;
}