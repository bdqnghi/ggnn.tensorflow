
void main()
{
	int x,a,b,c,d,e;
	scanf("%d",&x);
    a=x/10000;
	b=(x-a*10000)/1000;
	c=(x-a*10000-b*1000)/100;
	d=(x-a*10000-b*1000-c*100)/10;
	e=x-a*10000-b*1000-c*100-d*10;
	if(a==0)
		if(b==0)
			if(c==0)
				printf("%d%d\n",e,d);
			else
				printf("%d%d%d\n",e,d,c);
		else
			printf("%d%d%d%d\n",e,d,c,b);
	else
		printf("%d%d%d%d%d\n",e,d,c,b,a);
}