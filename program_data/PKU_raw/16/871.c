int main()
{   int a,b,c,d,e,f;
    scanf("%d",&a);
	b=a/10000;
	c=a/1000;
	d=(a%1000)/100;
	e=(a%100)/10;
	f=a%10;
	if(b!=0) printf("%05d",b);
	else if(c!=0) printf("%d%d%d%d",f,e,d,c);
	else if(d!=0) printf("%d%d%d",f,e,d);
	else if(e!=0) printf("%d%d",f,e);
	else printf("%d",f);
    return 0;
}
