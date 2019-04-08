int main()
{
	int a,a1,a2,a3,a4,a5,b;
	scanf("%d",&a);
	a1= a/10000;
	a2= a/1000-a1*10;
	a3= a/100-a2*10-a1*100;
	a4= a/10-a3*10-a2*100-a1*1000;
	a5= a-a4*10-a3*100-a2*1000-a1*10000;
	b = a1+a2*10+a3*100+a4*1000+a5*10000;
	if (a1==0)
		{if (a2==0)
		{if (a3==0)
		{if(a4==0)
		printf("%01d",b/10000);
		else
			printf("%02d",b/1000);}
		else
			printf("%03d",b/100);}
		else
			printf("%04d",b/10);}
	else
		printf("%05d",b);
	return 0;
}
