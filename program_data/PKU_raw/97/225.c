int main(int argc, char* argv[])
{
	int n,a,b,c,d,e,f,n1,n2,n3,n4,n5;
	scanf("%d",&n);
	a = (n-n%100)/100;
	n1=n-a*100;
	b = (n1-n1%50)/50;
	n2=n1-b*50;
	c = (n2-n2%20)/20;
	n3=n2-c*20;
	d = (n3-n3%10)/10;
	n4=n3-d*10;
	e = (n4-n4%5)/5;
	n5=n4-e*5;
	f = n5;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);



	return 0;
}
