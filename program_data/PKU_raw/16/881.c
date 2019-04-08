int main()
{
	int x,a,b,c,d,e;
	scanf("%d",&x);
	a=x/10000;
	b=x/1000-x/10000*10;
	c=x/100-x/1000*10;
	d=x/10-x/100*10;
	e=x-x/10*10;
	if(a!=0) printf("%d%d%d%d%d",e,d,c,b,a);
	else if(b!=0) printf("%d%d%d%d",e,d,c,b);
	     else if(c!=0) printf("%d%d%d",e,d,c);
		      else if(d!=0) printf("%d%d",e,d);
			       else printf("%d",e);
	return 0;
}
