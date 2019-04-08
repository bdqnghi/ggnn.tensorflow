struct point{
	double x;
	double y;
};
void main() 
{int n,num=-1,i,j;
struct point dot[40];
double s[1000]={0},max;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%lf %lf",&dot[i].x,&dot[i].y);//double?????lf??//
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{num=num+1;s[num]=(dot[j].x-dot[i].x)*(dot[j].x-dot[i].x)+(dot[j].y-dot[i].y)*(dot[j].y-dot[i].y);}

max=s[0];
for(i=1;i<=num+2;i++)
if(s[i]>max) max=s[i];
printf("%.4f\n",sqrt(max));
}
