int main()
{
  int n,a,b,c,d;	
	scanf("%d",&n);
	a=n/1000;
	b=(n/100)%10;
	c=(n%100)/10;
	d=n%10;

    
	
	if(n/1000!=0) printf("%d%d%d%d",d,c,b,a);
	else if(n/100!=0) printf("%d%d%d",d,c,b);
	else if(n/10!=0) printf("%d%d",d,c);
	else printf("%d",d);
	
	
return 0;

}