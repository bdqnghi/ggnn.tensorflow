int main ()
{
	int n,a,b,c,d,e,f;
	scanf("%d",&n);
	if(n>=100){
		a=n/100;
		b=(n-a*100)/50;
		c=(n-100*a-50*b)/20;
		d=(n-100*a-50*b-20*c)/10;
		e=(n-100*a-50*b-20*c-d*10)/5;
		f=n-100*a-50*b-20*c-d*10-e*5;
		printf("%d\n""%d\n""%d\n""%d\n""%d\n""%d\n",a,b,c,d,e,f);
	}
	else if(n<100&&n>=10){
		a=0;
		b=n/50;
		c=(n-50*b)/20;
		d=(n-50*b-20*c)/10;
		e=(n-50*b-20*c-d*10)/5;
f=n-50*b-20*c-d*10-5*e;
       printf("%d\n""%d\n""%d\n""%d\n""%d\n""%d\n",a,b,c,d,e,f);
	   }
	else if(n<10){
		a=0;
		b=0;
		c=0;
		d=0;
		e=n/5;
		f=n-5;
printf("%d\n""%d\n""%d\n""%d\n""%d\n""%d\n",a,b,c,d,e,f);
	}
	return 0;
}



