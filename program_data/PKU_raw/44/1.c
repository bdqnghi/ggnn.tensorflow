int reverse(int num)
{   
	int n,m,out;
	int a,b,c,d,e,f;
	m=abs(num);
	if(m<10)n=1;
	if(10<=m&&m<100)n=2;
    if(100<=m&&m<1000)n=3;
	if(1000<=m&&m<10000)n=4;
	if(10000<=m&&m<100000)n=5;
	if(100000<=m&&m<1000000)n=6;

	a=m%10;
	b=((m-a)%100)/10;
	c=((m-a-b*10)%1000)/100;
	d=((m-a-b*10-c*100)%10000)/1000;
	e=((m-a-b*10-c*100-d*1000)%100000)/10000;
	f=((m-a-b*10-c*100-d*1000-e*10000)%1000000)/100000;
    switch(n)
	{
	case 1:out=a;break;
	case 2:out=b+a*10;break;
	case 3:out=c+b*10+a*100;break;
	case 4:out=d+c*10+b*100+a*1000;break;
	case 5:out=e+d*10+c*100+b*1000+a*10000;break;
	case 6:out=f+e*10+d*100+c*1000+b*10000+a*100000;break;
	}
	return(out);
}
void main()
{
	int a[6],i,ou[6];
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	for(i=0;i<6;i++)
	{
		if(a[i]>=0)
			printf("%d\n",ou[i]=reverse(a[i]));
		else
			printf("%d\n",ou[i]=-reverse(a[i]));
	}
}


