void main()
{
	int n,m,d,w,i,y;
	long sum;
	char nian[20];
    scanf("%s%d%d",nian,&m,&d);
	n=strlen(nian);
	y=0;
	if(n>5)
		for(i=n-5;i<n;i++)
		   y=y*10+nian[i]-'0';
	else
		for(i=0;i<n;i++)
			y=y*10+nian[i]-'0';
    if(y%400==0||(y%4==0&&y%100!=0))
	{
        sum=365*(y-1)+y/4-y/100+y/400-1;
		if(m==1)
			sum+=0;
		if(m==2)
		    sum+=31;
		if(m>2&&m<=7)
			sum=sum+(m-1)*30+(m-2)/2;
		if(m>=8&&m<=12)
			sum=sum+(m-1)*30+(m-1)/2;
	}
	else
	{
        sum=365*(y-1)+y/4-y/100+y/400;
        if(m==1)
			sum+=0;
		if(m==2)
		    sum+=31;
		if(m>2&&m<=7)
			sum=sum+(m-1)*30+(m-2)/2-1;
		if(m>=8&&m<=12)
			sum=sum+(m-1)*30+(m-1)/2-1;
	}

	sum=sum+d;
	w=sum%7;
	if(w==1)
		printf("Mon.");
    if(w==2)
		printf("Tue.");
	if(w==3)
		printf("Wed.");
	if(w==4)
		printf("Thu.");
	if(w==5)
		printf("Fri.");
    if(w==6)
		printf("Sat.");
	if(w==0)
		printf("Sun.");
}