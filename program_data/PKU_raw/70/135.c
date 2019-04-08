

int main(int argc, char* argv[])
{int k,n,i;
double b;
double dis;

scanf("%d",&n);
struct point{
	double x;
	double y;};
struct point d[score];
for(i=0;i<n;i++)
scanf("%lf %lf",&d[i].x,&d[i].y); 
dis=0;
for(i=0;i<n;i++)

{for(k=0;k<i;k++){
	b=sqrt((d[i].x-d[k].x)*(d[i].x-d[k].x)+(d[i].y-d[k].y)*(d[i].y-d[k].y));
		if(b>dis)dis=b;}
}dis=(float)(dis); 
printf("%.4f",dis);
return 0;	
}