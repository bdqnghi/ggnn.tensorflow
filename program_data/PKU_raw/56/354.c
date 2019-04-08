
int main()
{
	int a,b,c,d,e,x,y;
	scanf ("%d",&x);
	a=x/10000;
	b=x%10000/1000;
	c=x%1000/100;
	d=x%100/10;
	e=x%10;
	if (x>=10000)
		printf ("%d\n",10000*e+1000*d+100*c+10*b+a);
	else if (x>=1000)
		printf ("%d\n",1000*e+100*d+10*c+b);
	else if (x>=100)
        printf ("%d\n",100*e+10*d+1*c);
	else if (x>=10)
		printf ("%d\n",10*e+1*d);
	else
		printf ("%d\n",e);
    return 0;
}