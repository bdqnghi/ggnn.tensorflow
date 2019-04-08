int main ()
{
	unsigned long a1, a2, a3, a4, a5, num;
	scanf ("%d", &num);
	if (num>0&&num<10)
		printf ("%ld", num);
	else if (num<100)
	{
		a1=num/10;
	    a2=num%10;
		printf ("%ld", 10*a2+a1);
	}
	else if (num<1000)
	{
		a1=num/100;
		a2=num/10-10*a1;
		a3=num%10;
		printf ("%ld", a3*100+a2*10+a1);
	}
	else if (num<10000)
	{
		a1=num/1000;
		a2=num/100-10*a1;
		a3=num/10-10*a2-100*a1;
		a4=num%10;
		printf ("%ld", a4*1000+a3*100+a2*10+a1);
	}
	else 
	{
		a1=num/10000;
		a2=num/1000-10*a1;
		a3=num/100-10*a2-100*a1;
		a4=num/10-10*a3-100*a2-1000*a1;
		a5=num%10;
		printf ("%ld",10000*a5+1000*a4+100*a3+10*a2+a1);
	}
	return 0;
}
