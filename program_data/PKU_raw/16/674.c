int main()
{
	int a;
	scanf("%d",&a);
	if(a==a%10)
		printf("%d",a);
	else if(a==a%100)
	printf("%02d",a=(a%100-a%10)/10+(a%10)*10);
    else if(a==a%1000)
    printf("%03d",a=(a%1000-a%100)/100+(a%100-a%10)+(a%10)*100);
	else
	printf("%04d",a=(a%10000-a%1000)/1000+(a%1000-a%100)/10+(a%100-a%10)*10+(a%10)*1000);
	return 0;
}