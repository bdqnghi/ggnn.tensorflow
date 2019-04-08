int main()
{
int n,z[100],i;
double a=0,b=0,c=0,d=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&z[i]);
if(z[i]>0&&z[i]<19)
{
a=a+1;
}
if(z[i]>18&&z[i]<36)
{
b=b+1;
}
if(z[i]>35&&z[i]<61)
{
c=c+1;
}
else if(z[i]>60)
{
d=d+1;
}}
printf("1-18: %.2lf%%\n",100*a/n);
printf("19-35: %.2lf%%\n",100*b/n);
printf("36-60: %.2lf%%\n",100*c/n);
printf("60??: %.2lf%%\n",100*d/n);
return 0;
}
