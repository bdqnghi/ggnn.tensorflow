int main()
{
	int i;
	double n,m=0,t=0,x=0,y=0,age[100];
	scanf("%lf",&n);
    for(i=0;i<n;i++)
	scanf("%lf",&age[i]);
	for(i=0;i<n;i++)
	{if(age[i]<=18)
	{
		m=m+1;
	}if(age[i]>18&&age[i]<=35)
	{
		t=t+1;
	}
	if(age[i]>35&&age[i]<=60)
	{
		x=x+1;
	}else if(age[i]>60)
	{
		y=y+1;
	}
	}
	printf("1-18: %.2lf",m/n*100);printf("%%\n");
	printf("19-35: %.2lf",t/n*100);printf("%%\n");
	printf("36-60: %.2lf",x/n*100);printf("%%\n");
	printf("60??: %.2lf",y/n*100);printf("%%\n");
    return 0;
}
