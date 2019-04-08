
int main()
{
	int x,y;
	int a,b,c;
	scanf ("%d",&x);
	a=x/100;
    b=(x-a*100)/10;
	c=x-a*100-b*10;
	y= c*100+b*10+a;
	
	printf ("%d\n",y);
	return 0;
}