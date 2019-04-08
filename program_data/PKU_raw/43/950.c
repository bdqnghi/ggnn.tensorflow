int main()
{
int n,a,b,c,d;
scanf("%d",&n);
a=3;
while(a<=n/2)
{
	for(b=2;b<=(sqrt)(a);b++)
	{
		if(a%b==0) goto o2;
	}
	c=n-a;
	for(d=2;d<=(sqrt)(c);d++)
	{
		if(c%d==0) goto o2;
	}
	printf("%d %d\n",a,c);
	o2:a++;
}
return 0;
}