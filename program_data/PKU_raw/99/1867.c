int u[100];
int main()
{
	double a=0,b=0,c=0,d=0;
	int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&u[i]);
}
for(i=0;i<n;i++)
{
if(u[i]<=18)
a++;
if(u[i]>=19&&u[i]<=35)
b++;
if(u[i]>=36&&u[i]<=60)
c++;
if(u[i]>60)
d++;
}
a=a/n*100;
b=b/n*100;
c=c/n*100;
d=d/n*100;
printf("1-18: %.2f%%\n",a);
printf("19-35: %.2f%%\n",b);
printf("36-60: %.2f%%\n",c);
printf("60??: %.2f%%\n",d);
	   return 0;
}