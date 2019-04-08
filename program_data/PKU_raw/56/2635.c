int main()
{
	int x;
	scanf("%d",&x);
	if(x<10)
		printf("%d",x);
	else if(9<x&&x<100)
		printf("%d",x%10*10+x/10);
    else if(99<x&&x<1000)
		printf("%d",x%10*100+x%100/10*10+x/100);
	else if(999<x&&x<10000)
		printf("%d",x%10*1000+x%100/10*100+x%1000/100*10+x/1000);
	else if(9999<x&&x<100000)
		printf("%d",x%10*10000+x%100/10*1000+x%1000/100*100+x%10000/1000*10+x/10000);
}