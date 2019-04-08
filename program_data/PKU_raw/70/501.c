int main()
{
int n,i,j;
double a,b,dis;
struct points{
double x,y;
   }point[N];
scanf("%d\n",&n);
for(i=0;i<n;i++){
scanf("%lf%lf\n",&point[i].x,&point[i].y);}
a=(point[0].x-point[1].x)*(point[0].x-point[1].x)+(point[0].y-point[1].y)*(point[0].y-point[1].y);
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++){
b=(point[i].x-point[j].x)*(point[i].x-point[j].x)+(point[i].y-point[j].y)*(point[i].y-point[j].y);
if(a<b)
a=b;}
dis=sqrt(a);
printf("%.4f\n",dis);
return 0;

}