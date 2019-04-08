void main()
{
	int a;
	scanf("%d",&a);
	if (a<10) printf("%d",a);
	else if (a<100)
		printf("%d%d",a%10,(a-a%10)/10);
	else if (a<1000)
		printf("%d%d%d",a%10,(a%100-a%10)/10,(a-a%100)/100);
	else if (a<10000)
		printf("%d%d%d%d",a%10,(a%100-a%10)/10,(a%1000-a%100)/100,(a-a%1000)/1000);
	else printf("00001");
}