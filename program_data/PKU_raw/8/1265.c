int d,e,f,g;
	int a[50],b[50],c[100];
int get(int a[50],int b[50]);
int repick(int a[50],int b[50]);
int hand(int a[50],int b[50],int c[100]);
int out(int c[100]);
int main()
{
    get(a,b);
    repick(a,b);
    hand(a,b,c);
	out(c);
	return 0;
}
int get(int a[50],int b[50])
{ 
	scanf("%d%d",&f,&g);
     for(d=0;d<f;d++)
		 scanf("%d",&a[d]);
	 for(e=0;e<g;e++)
		 scanf("%d",&b[e]);
	 return 0;
}
int repick(int a[50],int b[50])
{
	int h;
	for(d=0;d<f;d++)
		for(e=0;e<(f-d-1);e++)
			if (a[e]>a[e+1])
            {     
				  h=a[e+1];
			      a[e+1]=a[e];
				  a[e]=h;
			}
	for(d=0;d<g;d++)
		for(e=0;e<(g-d-1);e++)
			if (b[e]>b[e+1])
            {     
			   	h=b[e+1];
			      b[e+1]=b[e];
				  b[e]=h;
			}
			return 0;
}
int hand(int a[50],int b[50],int c[100])
{
	d=0;
	while (d<f)
	{	c[d]=a[d];
	    d++;
	}
	while (d<(f+g))
	{
		c[d]=b[d-f];
		d++;
	}
	return 0;
}
int out(int c[100])
{
	d=0	;
	printf("%d",c[d]);
	d++;
	while (d<(f+g))
	{	printf(" %d",c[d]);
	    d++;
	}
	return 0;
}
	