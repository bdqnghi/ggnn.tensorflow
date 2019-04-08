void main()
{
	int number, a[6]={0};
	scanf("%d", &number);
	printf("%d\n", number/100);
	if(number/100 != 0)
		a[0]=number%100;
	else
		a[0]=number;
	printf("%d\n", a[0]/50);
	if(a[0]/50 != 0)
		a[1]=a[0]%50;
	else
		a[1]=a[0];
	printf("%d\n", a[1]/20);
	if(a[1]/20 != 0)
		a[2]=a[1]%20;
	else
		a[2]=a[1];
	printf("%d\n", a[2]/10);
	if(a[2]/10 != 0)
		a[3]=a[2]%10;
	else
		a[3]=a[2];
	printf("%d\n", a[3]/5);
	if(a[3]/5 != 0)
		a[4]=a[3]%5;
	else
		a[4]=a[3];
	printf("%d", a[4]/1);
}