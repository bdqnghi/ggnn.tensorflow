void main()
{
	int n,age,u[100],i;double a=0,b=0,c=0,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&u[i]);
	}
for(i=0;i<n;i++)
{
	if(u[i]>=1&&u[i]<=18)a+=1.0/n;
if(u[i]>=19&&u[i]<=35)b+=1.0/n;
if(u[i]>=36&&u[i]<=60)c+=1.0/n;
if(u[i]>60)d+=1.0/n;
}
printf("1-18: %.2lf%%\n",100*a);
printf("19-35: %.2lf%%\n",100*b);
printf("36-60: %.2lf%%\n",100*c);
printf("60??: %.2lf%%\n",100*d);
}
