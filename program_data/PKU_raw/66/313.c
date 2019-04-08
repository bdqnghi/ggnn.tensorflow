void main()
{
	int i,x,y,z,m,d,k;
	long c,a[3];
	for(i=0;i<3;i++)
	{
		scanf("%ld",&a[i]);
	}
	x=(float)(a[0]-0.5)/4;
	y=(float)(a[0]-0.5)/100;
	z=(float)(a[0]-0.5)/400;
	m=x+z-y;
	if(a[0]<400)
		c=365*(a[0]-1)+m;
	else if(a[0]%400==0)
	{	x=(float)(a[0]%400-0.5)/4;
	    y=(float)(a[0]%400-0.5)/100;
		c=365*(a[0]%400)+x-y-6-3;
	}
	else
	{	x=(float)(a[0]%400-0.5)/4;
	    y=(float)(a[0]%400-0.5)/100;
		c=365*(a[0]%400)+x-y-6-2;
	}
	switch(a[1])
	{
	case 1:d=0;break;
	case 2:d=31;break;
	case 3:d=59;break;
	case 4:d=90;break;
	case 5:d=120;break;
	case 6:d=151;break;
	case 7:d=181;break;
	case 8:d=212;break;
	case 9:d=243;break;
	case 10:d=273;break;
	case 11:d=304;break;
	default:d=334;break;
	}
	if(((a[0]%4==0&&a[0]%100!=0)||a[0]%400==0)&&d>=59)
		c+=(d+1);
	else
		c+=d;
	c+=a[2]-1;
	k=c%7;
	switch(k)
	{
	case 0:printf("Mon.\n");break;
	case 1:printf("Tue.\n");break;
	case 2:printf("Wed.\n");break;
	case 3:printf("Thu.\n");break;
	case 4:printf("Fri.\n");break;
	case 5:printf("Sat.\n");break;
	case 6:printf("Sun.\n");break;
	}
}