
void main()
{
	long int num,f;
	int a,b,c,d,e;
	scanf("%ld",&num);
	a=num/10000;
	b=(num-a*10000)/1000;
	c=(num-a*10000-b*1000)/100;
	d=(num-a*10000-b*1000-c*100)/10;
	e=num-a*10000-b*1000-c*100-d*10;
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			{
				if(d==0) f=e;
				else f=10*e+d;
			}
			else f=100*e+10*d+c;
		}
		else f=1000*e+100*d+10*c+b;
	}
	else f=10000*e+1000*d+100*c+10*b+a;
	printf("%d\n",f);

}