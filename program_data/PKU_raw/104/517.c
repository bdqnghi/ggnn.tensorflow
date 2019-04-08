int main()
{
	int a[12]={100,100,100,100,100,100,100,100,100,100,100,100},b[12]={99,99,99,99,99,99,99,99,99,99,99,99},i,c,d,e;
	void x(int o[],int q);
	void y(int p[],int w);
	scanf("%d%d",&d,&e);
	x(a,d);
	y(b,e);
	for(i=1;i<11;i++)
	{
       c=a[i];
	   if(a[i+1]!=b[i+1])
		   break;
	}
	printf("%d\n",a[i]);
	return 0;
}
void x(int o[],int q)
{
	int m,u;
	if(q==1)
		m=1;
	else if(q<4)
		m=2,u=2;
	else if(q<8)
		m=3,u=4;
	else if(q<16)
		m=4,u=8;
	else if(q<32)
		m=5,u=16;
	else if(q<64)
	    m=6,u=32;
	else if(q<128)
		m=7,u=64;
	else if(q<256)
		m=8,u=128;
	else if(q<512)
		m=9,u=256;
	else
		m=10,u=512;
	o[m]=q;
	o[m-1]=u/2+(q-u)/2;
	if(m>2)
	x(o,o[m-1]);
}
void y(int p[],int w)
{
	int n,v;
	if(w==1)
		n=1;
	else if(w<4)
		n=2,v=2;
	else if(w<8)
		n=3,v=4;
	else if(w<16)
		n=4,v=8;
	else if(w<32)
		n=5,v=16;
	else if(w<64)
	    n=6,v=32;
	else if(w<128)
		n=7,v=64;
	else if(w<256)
		n=8,v=128;
	else if(w<512)
		n=9,v=256;
	else
		n=10,v=512;
	p[n]=w;
	p[n-1]=v/2+(w-v)/2;
	if(n>2)
	x(p,p[n-1]);
}

