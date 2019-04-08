int main()
{
	int n,a,b,c,d,e,t;
	scanf("%d",&n);
	if(n<10)
		t=n;
	else if(n<100){
		a=n/10;
		b=n%10;
		t=b*10+a;
	}
	else if(n<1000){
		a=n/100;
		b=n%100/10;
		c=n%10;
		t=c*100+b*10+a;
	}
	else if(n<10000){
		a=n/1000;
		b=n%1000/100;
		c=n%100/10;
		d=n%10;
		t=d*1000+c*100+b*10+a;
	}
	else if(n<100000){
		a=n/10000;
		b=n%10000/1000;
		c=n%1000/100;
		d=n%100/10;
		e=n%10;
		t=e*10000+d*1000+c*100+b*10+a;
	}
	printf("%d\n",t);
	return 0;
}
