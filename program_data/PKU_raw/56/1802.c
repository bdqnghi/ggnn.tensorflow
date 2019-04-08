int main()
{
	int a,p,q,r,s,x,y,z,t,m;
    scanf("%d",&a);
	p=a%10000;
	q=p%1000;
	r=q%100;
	s=r%10;
	x=(r-s)/10;
	y=(q-r)/100;
	z=(p-q)/1000;
	t=(a-p)/10000;
	if(a<10)
	{m=a;printf("%d\n",m); return 0;}
	if(a<100)
	{m=s*10+x; printf("%d\n",m); return 0;}
	if(a<1000)
	{m=s*100+x*10+y;printf("%d\n",m); return 0;}
	if(a<10000)
	{m=s*1000+x*100+y*10+z;printf("%d\n",m); return 0;}
	if(a<99999)
	    m=s*10000+x*1000+y*100+z*10+t;
	printf("%d\n",m);
}
