int reverse(int num); 
void main()
{
	int num[5],i;
	for (i=0;i<=5;i++)
	scanf("%d",&num[i]);
	for (i=0;i<=5;i++)
	printf("%d\n",reverse(num[i]));
}
int reverse(int num)
{ 
	int a=0,a1,a2,a3,a4,a5,a6;
	a1=num/100000;
	a2=(num-num/100000*100000)/10000;
	a3=(num-num/10000*10000)/1000;
	a4=(num-num/1000*1000)/100;
	a5=(num-num/100*100)/10;
	a6=num-num/10*10;
	a=a1+a2*10+a3*100+a4*1000+a5*10000+a6*100000;
	if(a%100000==0) a=a/100000;
	else if(a%10000==0) a=a/10000;
	else if(a%1000==0) a=a/1000;
	else if(a%100==0) a=a/100;
	else if(a%10==0) a=a/10;
	return a;
}


